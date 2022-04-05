#include <Arduino.h>
#include "sonar/sonar.h"
#include "setup.h"

void setup() {
  Serial.begin(9600);
  sonar_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  float d = distance(SONAR_TRIG_1, SONAR_ECHO_1) ;
  Serial.print("Distancia = ");
 // if (d >= 400 || d <= 2.5) {
 //   Serial.println("Fora de alcance");
 //   delay(500);
 // }
 // else {
    Serial.print(d);
    Serial.println(" cm");
    delay(1000);
  // }
  // if (too_close(SONAR_TRIG_1, SONAR_ECHO_1)) {
  //   Serial.println("too close \n\n");
  // }
}
