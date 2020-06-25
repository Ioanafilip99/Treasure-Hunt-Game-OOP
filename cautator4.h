#ifndef CAUTATOR4_H
#define CAUTATOR4_H
#include "cautator.h"
#include "harta.h"
using namespace std;


class Cautator4:public Cautator
{
public:
    Cautator4();
    ~Cautator4(){};
    void Start(Harta &h);
    void Deplasare(Harta &h);
};
#endif
