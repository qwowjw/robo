#include<Arduino.h>
#include<Wire.h>

const int s0 = 8;
const int s1 = 9;
const int s2 = 12;
const int s3 = 11;
const int out = 10;

//Pinos do led RGB
int pinoledverm = 2;
int pinoledverd = 3;
int pinoledazul = 4;

//Variaveis cores
int red = 0;
int green = 0;
int blue = 0;

void setup(){
    pinMode(s0, OUTPUT);
    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    pinMode(s3, OUTPUT);
    pinMode(out, INPUT);
    Serial.begin(9600);
    digitalWrite(s0, HIGH);
    digitalWrite(s1, LOW);
}
void color(){
    //Rotina que le o valor das cores
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    //count OUT, pRed, Vermelho
    red = pulseIn(out, HIGH);
    digitalWrite(s3, HIGH);
    //count OUT, pBLUE, Azul
    blue = pulseIn(out, HIGH);
    digitalWrite(s2, HIGH);
    //count OUT, pGreen, Verde
    green = pulseIn(out, HIGH);
}
void loop(){
    //Detecta a cor
    color();
    //Mostra valores no serial monitor
    Serial.print("Vermelho :");
    Serial.print(red);
    Serial.print(" Verde : ");
    Serial.print(green, DEC);
    Serial.print(" Azul : ");
    Serial.print(blue, DEC);
    Serial.println();

    //Verifica se a cor vermelha foi detectada
    if (red < blue && red < green && red < 100)
        Serial.println("Vermelho");
    //Verifica se a cor azul foi detectada
    else if (blue < red && blue < green && blue < 1000)
        Serial.println("Azul");
    //Verifica se a cor verde foi detectada
    else if (green < red && green < blue)
        Serial.println("Verde");

    Serial.println();
}

