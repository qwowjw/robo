#ifndef MOTORDC_H
#define MOTORDC_H
class MotorDC{
public:
    MotorDC(int pinoA,int pinoB,int pinoPwn);
    ~MotorDC();

    void andar_para_frente(int *velocidade);

    void andar_para_tras(int *velocidade);

    void parar();

private:
    int pinoA;
    int pinoB;
    int pinoPwn;  //de 0 a 250

    int velocidade;
};
#endif