#include<Arduino.h>
#include<Wire.h>

#define PWM1 A0
#define IN1 7
#define IN2 8
#define PWM2 
#define IN3 9
#define IN4 10

void setup(){
    
    pinMode(PWM1, OUTPUT);
    pinMode(IN1, OUTPUT);    
    pinMode(IN2, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

}
void andar_frente(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(2000);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2,HIGH);
}
void andar_tras(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    delay(2000);
    //Para o motor A
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
    delay(500);
}