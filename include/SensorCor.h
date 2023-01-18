#ifndef SENSOR_COR_H
class SensorCor{
public:
    SensorCor(int S2, int S3, double OUT, int s1, int s0);
    ~SensorCor();
    char ler_cor();
private:
    int S2;int S3; double OUT;int s1; int s0;
    void init(int s2, int s3, double OUT, int s1, int s0);
    double vermelho,azul,verde;
};

#endif