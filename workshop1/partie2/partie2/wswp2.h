#pragma once
class Clcalcul
{
private:
    int n;
    int b;
    void ini(int);
    static int cpteObj;
public:
    Clcalcul(void);
    Clcalcul(int);
    void carre(void);
    void setN(int);
    int getN(void);
    int getB(void);
};
