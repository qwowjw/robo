#include <Arduino.h>
#include <Wire.h>
#include<SensorUltrassom.h>

int trig =9;
int echo =8;
#define trigger 9
#define echo 8
SensorUltrassom sensorUltrassom(trigger, echo);//pino 9 
void setup(){
    Serial.begin(9600);
    
}
void loop(){
    Serial.println(sensorUltrassom.distancia()); // retornar a distância atual em série
    delay(200);
    
}