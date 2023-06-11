#include <DHTesp.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>
#include <Wire.h>
#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "images.h"

// Pin Definitions
#define DHTPIN 14        // Pin connected to DHT sensor
#define DHTTYPE DHTesp::DHT22 // DHT sensor type
#define BUTTON_PIN 12    // Pin connected to the button
#define RED_LED_PIN 4    // Pin connected to the red LED
#define GREEN_LED_PIN 15 // Pin connected to the green LED

#define NTP_SERVER "pool.ntp.org"
#define UTC_OFFSET 7
#define UTC_OFFSET_DST 0

// OLED display configuration
Adafruit_SSD1306 display(128, 64, &Wire, -1);

// DHT sensor instance
DHTesp dht;

// Task handles
TaskHandle_t temperatureTaskHandle;
TaskHandle_t displayTaskHandle;

// Semaphore for button press
SemaphoreHandle_t buttonSemaphore;

// LED states
bool redLedState = false;
bool greenLedState = false;

// WIFI
const char *ssid = "Wokwi-GUEST";
const char *password = "";

// Display modes
enum DisplayMode
{
    DISPLAY_MODE_TEMP_HUM,
    DISPLAY_MODE_CLOCK
};

DisplayMode currentDisplayMode = DISPLAY_MODE_TEMP_HUM;

// Global variables
TempAndHumidity data ;
int time_to_display_clock = 3;


// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1040)
void draw_animation(unsigned int duration, bool gif=false){
        int start = millis();
        bool flag=true;
        while(millis()-start < duration){
            if(flag){
                display.drawBitmap(0, 0, bitmap1, 128, 64, WHITE);
            }
            else{
                display.drawBitmap(0, 0, bitmap2, 128, 64, WHITE);
            }
            display.display();
            flag = !flag;
            delay(300);
            display.clearDisplay();
        }
    
}
void setup()
{
    // Initialize serial communication
    Serial.begin(115200);

    // Initialize the DHT sensor
    dht.setup(DHTPIN, DHTTYPE);

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
    draw_animation(3000);
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0, 0);

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }

    // Set the timezone and fetch NTP time
    configTime(UTC_OFFSET * 3600, UTC_OFFSET_DST * 3600, NTP_SERVER);
    Serial.println("Fetching NTP time...");
    while (time(nullptr) < 100000)
    {
        delay(1000);
    }
    Serial.println("NTP time updated.");

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
        redLedState = !redLedState;
        greenLedState = !greenLedState;

        // Update the LED states
        digitalWrite(RED_LED_PIN, redLedState ? HIGH : LOW);
        digitalWrite(GREEN_LED_PIN, greenLedState ? HIGH : LOW);

        vTaskDelay(pdMS_TO_TICKS(2000));
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
        else{
            currentDisplayMode = DISPLAY_MODE_TEMP_HUM;
        }

        if (currentDisplayMode == DISPLAY_MODE_TEMP_HUM)
        {
            // Display temperature and humidity
            display.clearDisplay();
            display.setCursor(0, 0);
            display.print("Temp: ");
            display.print(data.temperature,1);
            display.print("C");
            display.setCursor(0, 32);
            display.print("Humid: ");
            display.print(data.humidity,1);
            display.print("%");
            display.display();
        }
        else if (currentDisplayMode == DISPLAY_MODE_CLOCK)
        {
            time_t currentTime = time(nullptr);
            struct tm *timeInfo = localtime(&currentTime);
            int start = timeInfo->tm_sec;
            while(timeInfo->tm_sec - start < time_to_display_clock){
                display.clearDisplay();
                display.setCursor(0, 0);
                display.print("Time: ");
                display.setCursor(0, 20);
                display.print(timeInfo->tm_hour);
                display.print(":");
                display.print(timeInfo->tm_min);
                display.print(":");
                display.print(timeInfo->tm_sec);
                display.display();
                currentTime = time(nullptr);
                timeInfo = localtime(&currentTime);
                Serial.println(timeInfo->tm_sec-start);
            }
        }

        // vTaskDelay(pdMS_TO_TICKS(1000));

        // Other display tasks or data updates

        vTaskDelay(pdMS_TO_TICKS(200));
    }
}
