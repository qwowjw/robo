#include <Arduino.h>

class SensorUltrassom{
public:
	SensorUltrassom(int trigger, int echo);
	~SensorUltrassom();
	float distancia();
	float distancia_filtro();

private:
	void init(int out, int echo);
	int trigger;
	int echo;
	float dist;
};
