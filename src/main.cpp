#include<Arduino.h>
int readings[5] = {0,0,0,0,0};
int inde = 0;
void setup() {
Serial.begin(115200);
pinMode(2,OUTPUT);
ledcSetup(0,5000,8);
ledcAttachPin(2,0);
int firstReading = touchRead(4);
for(int i = 0; i<5 ; i++) {
  readings[i] = firstReading;
}
}
void loop() {
int tr = touchRead(4);
readings[inde] = tr;
inde=inde+1;
if(inde==5)
inde = 0;
int total = 0;
for(int i = 0; i<5 ; i++) {
  total = total+readings[inde];
}
int avg = total/5;
Serial.print("Raw: ");
Serial.println(touchRead(4));
Serial.print("Average: ");
Serial.print(avg);
int a = map(avg,116,0,0,255);
ledcWrite(0,a);
delay(200);
}