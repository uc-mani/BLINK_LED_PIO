#include <Arduino.h>


#define LED_PIN 22
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(touchRead(4));
  if(touchRead(4) < 50 ){
    digitalWrite(LED_PIN, LOW);
  }
  else{
    digitalWrite(LED_PIN, HIGH);
  }
  delay(100);
}
