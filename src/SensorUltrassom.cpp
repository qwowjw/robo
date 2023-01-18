#include<SensorUltrassom.h>
#include<math.h>

void SensorUltrassom::init(int trigger, int echo){
	this->trigger = trigger;
	this->echo = echo;
	pinMode(this->trigger, OUTPUT);
	digitalWrite(this->trigger, LOW);
	float ultimas_distancias[3]={0,0,0};
}

SensorUltrassom::SensorUltrassom(int trigger, int echo) { this->init(trigger, echo); }

SensorUltrassom::~SensorUltrassom(){
	~this->trigger;
	~this->echo;
}

float SensorUltrassom::distancia(){
	digitalWrite(this->trigger, HIGH);
	delayMicroseconds(5);
	digitalWrite(this->trigger, LOW);
	float tempoEcho = pulseIn(this->echo, HIGH);
	this->dist = tempoEcho/58.8235;
	return this->dist;
}