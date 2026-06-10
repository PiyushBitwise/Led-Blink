#include <Arduino.h>

int ledState = 0;
int lastTouchState = 0;  // 0 = not touched last time

void setup() {
    Serial.begin(115200);
    pinMode(2, OUTPUT);
}

void loop() {
    int currentTouch = touchRead(15) < 100;  // 1 if touching, 0 if not
    
    if(currentTouch == 1 && lastTouchState == 0) {
        // NEW touch detected!
        // toggle ledState — if 0 make 1, if 1 make 0
        // write that to LED
        ledState = 1-ledState;
        digitalWrite(2,ledState);

    }
    
    lastTouchState = currentTouch;  // save current for next time
    delay(100);
}