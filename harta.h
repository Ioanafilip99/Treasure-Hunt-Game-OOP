#ifndef HARTA_H
#define HARTA_H
#include <iostream>
using namespace std;

class Harta
{
    char **h;           ///matricea care reprezinta harta
    int nr_comori;      ///numarul de comori de pe harta
public:
    Harta();            ///constructor
    ~Harta();           ///destructor

    void SetElement(int i,int j,char c);    ///modifica un element de pe harta
    char GetElement(int i,int j);           ///afla ce element se afla pe harta la o pozitie data
    void SetNrComori(int i);                ///seteaza nr de comori
    int GetNrComori();                      ///afla nr de comori
    friend ostream &operator<<(ostream &out,const Harta &harta);    ///afisarea
};
#endif // HARTA_H
