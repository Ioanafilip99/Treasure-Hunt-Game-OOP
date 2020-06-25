#include "cautator2.h"
using namespace std;

Cautator2::Cautator2()
{
    nume='2';
    poz.i=0;
    poz.j=14;
}

void Cautator2::Start(Harta &harta)
{
    harta.SetElement(poz.i,poz.j,nume);
}

void Cautator2::Deplasare(Harta &harta)
{
    int x;
    x=harta.GetNrComori();
    if(poz.j-1 >= 0 && (harta.GetElement(poz.i,poz.j-1)=='.' || harta.GetElement(poz.i,poz.j-1)=='c'))    ///stanga
    {
        if(harta.GetElement(poz.i,poz.j-1)=='c')
        {
            harta.SetNrComori(x-1);

            harta.SetElement(poz.i,poz.j,'x');
            harta.SetElement(poz.i,poz.j-1,'x');
        }
        else
        {
            harta.SetElement(poz.i,poz.j-1,nume);
            harta.SetElement(poz.i,poz.j,'x');
            poz.j--;
        }
    }
    else if(poz.i+1 < 15 && (harta.GetElement(poz.i+1,poz.j)=='.' || harta.GetElement(poz.i+1,poz.j)=='c'))   ///jos
    {
        if(harta.GetElement(poz.i+1,poz.j)=='c')
        {
            harta.SetNrComori(x-1);

            harta.SetElement(poz.i,poz.j,'x');
            harta.SetElement(poz.i+1,poz.j,'x');
        }
        else
        {
            harta.SetElement(poz.i+1,poz.j,nume);
            harta.SetElement(poz.i,poz.j,'x');
            poz.i++;
        }
    }
    else if(poz.j+1 < 15 && (harta.GetElement(poz.i,poz.j+1)=='.' || harta.GetElement(poz.i,poz.j+1)=='c'))  ///dreapta
    {
        if(harta.GetElement(poz.i,poz.j+1)=='c')
        {
            harta.SetNrComori(x-1);

            harta.SetElement(poz.i,poz.j,'x');
            harta.SetElement(poz.i,poz.j+1,'x');
        }
        else
        {
            harta.SetElement(poz.i,poz.j+1,nume);
            harta.SetElement(poz.i,poz.j,'x');
            poz.j++;
        }
    }
    else if(poz.i-1 >=0 && (harta.GetElement(poz.i-1,poz.j)=='.' || harta.GetElement(poz.i-1,poz.j)=='c'))   ///sus
    {
        if(harta.GetElement(poz.i-1,poz.j)=='c')
        {
            harta.SetNrComori(x-1);

            harta.SetElement(poz.i,poz.j,'x');
            harta.SetElement(poz.i-1,poz.j,'x');
        }
        harta.SetElement(poz.i-1,poz.j,nume);
        harta.SetElement(poz.i,poz.j,'x');
        poz.i--;
    }

}
