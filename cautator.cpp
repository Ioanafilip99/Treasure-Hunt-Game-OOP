#include <iostream>
#include "cautator.h"

using namespace std;

void Cautator::SetPoz(int a,int b)
{
    poz.i=a;
    poz.j=b;
}

char Cautator::GetNume()
{
    return this->nume;
}

Coordonate Cautator::GetPoz()
{
    return this->poz;
}
