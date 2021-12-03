#include <Arduino.h>
#define LED1 15 //GP015
#define LED2 16 //GP016
#define LED3 5 //GP05

void setup() {
  // Set pin mode
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  delay(2000); //2000 mili second
  digitalWrite(LED1,HIGH);
  delay(2000); 
  digitalWrite(LED1,LOW);
  delay(2000); 
  digitalWrite(LED2,HIGH);
  delay(2000); 
  digitalWrite(LED2,LOW);
  delay(2000); 
  digitalWrite(LED3,HIGH);
  delay(2000); 
  digitalWrite(LED3,LOW);
  delay(2000);
}
