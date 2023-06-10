

#include "RTClib.h"
#include "images.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHTesp.h>
#include <Wire.h>
#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// Pin Definitions
#define DHTPIN 14             // Pin connected to DHT sensor
#define DHTTYPE DHTesp::DHT22 // DHT sensor type
#define BUTTON_PIN 12         // Pin connected to the button
#define RED_LED_PIN 4         // Pin connected to the red LED
#define GREEN_LED_PIN 15      // Pin connected to the green LED

// RTC
// reference RTC API : https://adafruit.github.io/RTClib/html/index.html
RTC_DS1307 rtc;

// OLED display configuration
// reference SSD1306 OLED API : http://adafruit.github.io/Adafruit_SSD1306/html/index.html
Adafruit_SSD1306 display(128, 64, &Wire, -1);

// DHT sensor
// reference DHT for ESP API : https://github.com/beegee-tokyo/DHTesp
DHTesp dht;

// Task handles
TaskHandle_t temperatureTaskHandle;
TaskHandle_t displayTaskHandle;

// Semaphore for button press
SemaphoreHandle_t buttonSemaphore;

// LED states
bool redLedState = false;
bool greenLedState = false;

// Display modes
enum DisplayMode
{
    DISPLAY_MODE_TEMP_HUM,
    DISPLAY_MODE_CLOCK
};

DisplayMode currentDisplayMode = DISPLAY_MODE_TEMP_HUM;

// Global variables
TempAndHumidity data;
int time_to_display_clock = 3;

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1040)
void draw_animation(unsigned int duration, bool gif = false)
{
    if (!gif)
    {
        display.drawBitmap(0, 0, bitmap, 128, 64, WHITE);
        display.display();
    }
    else
    {
        int start = millis();
        bool flag = true;
        while (millis() - start < duration)
        {
            if (flag)
            {
                display.drawBitmap(0, 0, bitmap1, 128, 64, WHITE);
            }
            else
            {
                display.drawBitmap(0, 0, bitmap2, 128, 64, WHITE);
            }
            display.display();
            flag = !flag;
            delay(300);
            display.clearDisplay();
        }
    }
}
void setup()
{
    // Initialize serial communication
    Serial.begin(115200);

    // Initialize the DHT sensor
    dht.setup(DHTPIN, DHTTYPE);

    // Initialize RTC
    if (!rtc.begin())
    {
        Serial.println("Couldn't find RTC");
        Serial.flush();
        abort();
    }
    if (!rtc.isrunning())
    {
        Serial.println("RTC is NOT running, let's set the time!");
        // When time needs to be set on a new device, or after a power loss, the
        // following line sets the RTC to the date & time this sketch was compiled
        rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
        // This line sets the RTC with an explicit date & time, for example to set
        // January 21, 2014 at 3am you would call:
        // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
    }

    // Initialize the button pin
    pinMode(BUTTON_PIN, INPUT_PULLUP);

    // Initialize the LED pins
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);

    // Create a binary semaphore for the button press
    buttonSemaphore = xSemaphoreCreateBinary();

    // Initialize the display
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

    display.clearDisplay();
    display.setCursor(0, 0);
    // delay(1000);
    draw_animation(3000, true);
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);

    // Create tasks
    xTaskCreate(temperatureTask, "TemperatureTask", 10000, NULL, 1, &temperatureTaskHandle);
    xTaskCreate(displayTask, "DisplayTask", 10000, NULL, 1, &displayTaskHandle);
}

void loop()
{

    // Check if the button is pressed
    if (digitalRead(BUTTON_PIN) == LOW)
    {
        // Take the semaphore to signal button press
        Serial.println("Button pressed");
        xSemaphoreGive(buttonSemaphore);
    }

    delay(10);
}

void temperatureTask(void *parameter)
{
    for (;;)
    {
        data = dht.getTempAndHumidity();

        // Toggle the LED states
        if (data.temperature > 33)
        {
            redLedState = true;
        }
        else
        {
            redLedState = false;
        }
        greenLedState = !greenLedState;

        // Update the LED states
        digitalWrite(RED_LED_PIN, redLedState ? HIGH : LOW);
        digitalWrite(GREEN_LED_PIN, greenLedState ? HIGH : LOW);

        // sensor update 2Hz or once in every 500 ms
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}

void displayTask(void *parameter)
{
    for (;;)
    {
        // Check if the button is pressed
        if (xSemaphoreTake(buttonSemaphore, 0) == pdTRUE)
        {
            // Switch to displaying the clock
            currentDisplayMode = DISPLAY_MODE_CLOCK;
        }
        else
        {
            currentDisplayMode = DISPLAY_MODE_TEMP_HUM;
        }

        if (currentDisplayMode == DISPLAY_MODE_TEMP_HUM)
        {
            // Display temperature and humidity
            display.clearDisplay();
            display.setCursor(0, 0);
            display.print("Temp: ");
            display.print(data.temperature, 1);
            display.print("C");
            display.setCursor(0, 32);
            display.print("Humid: ");
            display.print(data.humidity, 1);
            display.print("%");
            display.display();
        }

        else if (currentDisplayMode == DISPLAY_MODE_CLOCK)
        {
            DateTime time = rtc.now();
            int start = time.second();
            while (time.second() - start < time_to_display_clock)
            {
                display.clearDisplay();
                display.setCursor(0, 0);
                display.print("Time: ");
                display.setCursor(0, 20);
                display.print(time.timestamp(DateTime::TIMESTAMP_TIME));
                // update display pada OLED screen
                display.display();

                // update time
                time = rtc.now();
                // uncomment untuk debugging, print pada serial monitor
                // Serial.println("start : " + String(start));
                // Serial.println(time.second()-start);
            }
        }
        // Other display tasks or data updates

        vTaskDelay(pdMS_TO_TICKS(1));
    }
}
