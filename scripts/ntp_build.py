import json
import os
import sys

filename = 'diagram.json'
# delete diagram.json if exist
if os.path.exists(filename):
    os.remove(filename)
json_content='''
  {
  "version": 1,
  "author": "Nara atthama",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-esp32-devkit-v1", "id": "esp", "top": 0, "left": 0, "attrs": {} },

    { "type": "board-ssd1306", "id": "oled1", "top": -74.28, "left": 174.85, "attrs": {} },
    { "type": "wokwi-dht22", "id": "dht1", "top": -100.52, "left": -113.07, "attrs": {} },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": 30.04,
      "left": 263.57,
      "rotate": 90,
      "attrs": { "color": "white", "lightColor": "red" }
    },
    {
      "type": "wokwi-led",
      "id": "led2",
      "top": 67.81,
      "left": 257,
      "rotate": 90,
      "attrs": { "color": "white", "lightColor": "limegreen" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": 45.52,
      "left": 196.37,
      "attrs": { "value": "600" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 88.91,
      "left": -128.45,
      "attrs": { "color": "grey", "key": "1", "bounce": "1" }
    }
  ],
  "connections": [
    [ "esp:TX0", "$serialMonitor:RX", "", [] ],
    [ "esp:RX0", "$serialMonitor:TX", "", [] ],
    [ "led1:C", "r1:2", "black", [ "h-15.17", "v-13.44" ] ],
    [ "led2:C", "r1:2", "black", [ "h0" ] ],
    [ "esp:GND.1", "r1:1", "black", [ "h0" ] ],
    [ "esp:D15", "led2:A", "limegreen", [ "h0" ] ],
    [ "esp:D4", "led1:A", "red", [ "h122.94", "v-42.08", "h42.33" ] ],
    [ "esp:GND.2", "btn1:2.r", "black", [ "h0" ] ],
    [ "btn1:1.r", "esp:D12", "green", [ "h17.32", "v101.6" ] ],
    [ "oled1:VCC", "esp:VIN", "red", [ "v-41.91", "h-243.57", "v269.02" ] ],
    [ "oled1:SCL", "esp:D22", "cyan", [ "v-19.56", "h-119.02", "v121.38" ] ],
    [ "oled1:SDA", "esp:D21", "magenta", [ "v-7.3", "h-120.2", "v138.02" ] ],
    [ "oled1:GND", "esp:GND.1", "black", [ "v-23.8", "h-80.17", "v240.62" ] ],
    [ "dht1:VCC", "esp:VIN", "red", [ "v30.15", "h77.15", "v113.17" ] ],
    [ "dht1:GND", "esp:GND.2", "black", [ "v60.62", "h40.88", "v73.38" ] ],
    [ "dht1:SDA", "esp:D14", "gold", [ "v66.9", "h52.6", "v38.72" ] ]
  ],
  "serialMonitor": { "display": "always", "newline": "lf" },
  "dependencies": {}
}
'''
json_content = json.loads(json_content)
# dump json to file
json.dump(json_content, open(filename, 'w'), indent=4)


# clean src directory
print(os.listdir('src'))
for i in os.listdir('src'):
    os.rename('src/'+i, 'scripts/'+i)

#  move main_RTC.ino and images.h to src directory
os.rename('scripts/main_NTP.ino', 'src/main_NTP.ino')
os.rename('scripts/images.h', 'src/images.h')

#write toml scripts
toml_content = r"""
[wokwi]
version = 1
firmware = '.pio\build\esp32dev_NTP_Clock\firmware.bin'
elf = '.pio\build\esp32dev_NTP_Clock\firmware.elf'
"""
toml_file = open('wokwi.toml', 'w')
toml_file.write(toml_content)