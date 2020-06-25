#include <stdlib.h>
#include <time.h>
#include "harta.h"

using namespace std;

Harta::Harta()
{
    int i,j,x;

    h=new char*[15];

    for(i=0; i<15; i++)
        h[i]=new char[15];

    for(i=0; i<15; i++)
        for(j=0; j<15; j++)
            h[i][j]='.';

    SetNrComori(3);
    srand(time(0));
    for(i=0; i<nr_comori; i++)  ///pune comorile pe harta pe poziti random
    {
        x=rand()%14+1;
        j=rand()%14+1;
        while((x==0 && j==0)||(x==0 && j==14)||(x==14 && j==0)||(x==14 && j==14))   ///cat timp nu se genereaza pozitii in colturile hartii
        {
            x=rand()%14+1;
            j=rand()%14+1;
        }
        h[x][j]='c';
    }
}

Harta::~Harta()
{
    for(int i=0; i<15; i++)
        delete[] h[i];
    delete[] h;
}

void Harta::SetElement(int i,int j,char c)
{
    h[i][j]=c;
}

char Harta::GetElement(int i,int j)
{
    return h[i][j];
}

void Harta::SetNrComori(int x)
{
    nr_comori=x;
}

int Harta::GetNrComori()
{
    return nr_comori;
}

ostream &operator<<(ostream &out,const Harta &harta)       ///AFISAREA <<
{
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
            out<<harta.h[i][j]<<' ';
        out<<endl;
    }
    out<<endl;
    return out;
}
