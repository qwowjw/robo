#include<MotorDC.h> 
#include<Arduino.h>
#include<Wire.h>

MotorDC::MotorDC(int pinoA,int pinoB,int pinoPwn){
    this->pinoA = pinoA;
    this->pinoB = pinoB;
    this->pinoPwn = pinoPwn;
}
void MotorDC:: andar_para_frente(int* velocidade){
    digitalWrite(this->pinoA,HIGH);
    digitalWrite(this->pinoB, LOW);
    analogWrite(this->pinoPwn,*velocidade);
    
}
void MotorDC::andar_para_tras(int* velocidade){
    digitalWrite(this->pinoA, LOW);
    digitalWrite(this->pinoB, HIGH);
    analogWrite(this->pinoPwn, *velocidade);

}
void MotorDC::parar(){
    digitalWrite(this->pinoA, LOW);
    digitalWrite(this->pinoB, LOW);
}
