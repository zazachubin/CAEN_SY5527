#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) 
  {
  while (1) {}
  }
}
  
void loop() {
    Serial.print("$");
    Serial.print(bmp.readPressure());
    Serial.print(",");
    Serial.print(bmp.readTemperature(),1);
    Serial.print("&");
    Serial.println();
    delay(100);
}
