#ifndef JOC_H
#define JOC_H
#include "cautator.h"
#include "harta.h"
#include <vector>
using namespace std;

class Joc
{
    vector<Cautator*>C;         ///vector de cautatori
    vector<char>castigatori;    ///vector de cautatori castigatori ce tine minte doar numele acestora
    Harta H;                    ///harta
    int runda;
public:
    Joc();                      ///constructor
    ~Joc(){};                   ///destructor
    void Start();               ///
    void Runde(int r);
    void Castigatori();
    void CautaComori();
};
#endif
