#include <Arduino.h>
void setup() {
    Serial.begin(115200);
    pinMode(2,OUTPUT);
}
void loop() {
    int tv = touchRead(4);
    Serial.println(tv);
if(tv < 15) {
digitalWrite(2,HIGH);}
else{
digitalWrite(2,LOW);
}
delay(100);
}

