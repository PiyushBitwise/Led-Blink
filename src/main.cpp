#include <Arduino.h>
void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(34);
  float voltage = value * (3.3 / 4095.0);
  int percent = map(value, 0, 4095, 0, 100);
  Serial.print("Raw: ");
  Serial.print(value);
  Serial.print("  |  Voltage: ");
  Serial.print(voltage);
  Serial.print("V  |  Percent: ");
  Serial.print(percent);
  Serial.println("%");
  delay(200);   
}
