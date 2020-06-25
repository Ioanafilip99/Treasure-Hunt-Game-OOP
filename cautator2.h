#ifndef CAUTATOR2_H
#define CAUTATOR2_H
#include "cautator.h"
#include "harta.h"
using namespace std;


class Cautator2:public Cautator
{
public:
    Cautator2();
    ~Cautator2(){};
    void Start(Harta &h);
    void Deplasare(Harta &h);
};
#endif
