#include <Arduino.h>

void setup() {
    pinMode(2, OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH);
    delay(9);
    digitalWrite(2, LOW);
    delay(1);
}