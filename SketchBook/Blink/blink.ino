#include "config.h"
/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_WRITE, OUTPUT);     
  pinMode(LED_POWER, OUTPUT);     
  pinMode(LED_RX_B, OUTPUT);     
  pinMode(LED_RX_A, OUTPUT);     
  pinMode(SUPPLY_3V3, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED_WRITE, 1);     
  digitalWrite(LED_POWER, 0);     
  digitalWrite(LED_RX_B, 0);     
  digitalWrite(LED_RX_A, 1);    
  digitalWrite(SUPPLY_3V3, 1);    
  delay(2000); 
  digitalWrite(LED_WRITE, 0);     
  digitalWrite(LED_POWER, 1);     
  digitalWrite(LED_RX_B, 1);     
  digitalWrite(LED_RX_A, 0);    
  digitalWrite(SUPPLY_3V3, 0);    
  delay(2000); 
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                

