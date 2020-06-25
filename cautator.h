#ifndef CAUTATOR_H
#define CAUTATOR_H

using namespace std;

class Harta;

struct Coordonate
{
    int i,j;
};

class Cautator
{
protected:
    char nume;
    Coordonate poz;
public:
    Cautator(){};               ///constructor
    virtual ~Cautator(){};      ///destructor

    char GetNume();             ///afla numele
    Coordonate GetPoz();        ///afla pozitia de pe harta
    void SetPoz(int a,int b);   ///modifica pozitia de pe harta


    virtual void Start(Harta &h)=0;         ///plaseaza cautatorul pe pozitia de start
    virtual void Deplasare(Harta &h)=0;     ///functia de deplasare a cauatorului
} ;
#endif
