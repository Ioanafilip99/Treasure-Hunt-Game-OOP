#ifndef CAUTATOR1_H
#define CAUTATOR1_H
#include "cautator.h"
#include "harta.h"
using namespace std;


class Cautator1:public Cautator
{
public:
    Cautator1();
    ~Cautator1(){};
    void Start(Harta &h);
    void Deplasare(Harta &h);
};
#endif
