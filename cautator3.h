#ifndef CAUTATOR3_H
#define CAUTATOR3_H
#include "cautator.h"
#include "harta.h"
using namespace std;


class Cautator3:public Cautator
{
public:
    Cautator3();
    ~Cautator3(){};
    void Start(Harta &h);
    void Deplasare(Harta &h);
};
#endif
