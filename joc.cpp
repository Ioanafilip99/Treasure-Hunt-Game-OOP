#include <vector>
#include "joc.h"
#include "cautator1.h"
#include "cautator2.h"
#include "cautator3.h"
#include "cautator4.h"
using namespace std;

Joc::Joc()
{
    Cautator* p=new Cautator1;
    C.push_back(p);

    Cautator* p1=new Cautator2;
    C.push_back(p1);

    Cautator* p2=new Cautator3;
    C.push_back(p2);

    Cautator* p3=new Cautator4;
    C.push_back(p3);
}

void Joc::Start()
{
    unsigned int i;

    for(i=0; i<4; i++)
        C[i]->Start(H);
    runda=0;

    cout<<"*********** START ***********"<<endl;
    cout<<endl<<H;
}

void Joc::Runde(int r)
{
    int c,k;

    Coordonate x,y;

    c=H.GetNrComori();

    while(c>0 && C.size()>0 && runda<r)
    {
        runda++;
        cout<<endl<<"********** RUNDA "<<runda<<" ***********"<<endl;

        for(k=0; k<C.size(); k++)
        {
            cout<<endl<<"Cautatorul "<<C[k]->GetNume();

            x=C[k]->GetPoz();
            C[k]->Deplasare(H);
            y=C[k]->GetPoz();

            if(x.i==y.i && x.j==y.j)
            {
                cout<<" s-a blocat."<<endl;

                C.erase(C.begin()+k);
            }
            else
            {
                cout<<" s-a mutat de pe pozitia "<<x.i<<' '<<x.j<<" pe pozitia "<<y.i<<' '<<y.j;

                if(H.GetNrComori()<c)
                {
                    cout<<" si a gasit o comoara."<<endl;

                    castigatori.push_back(C[k]->GetNume());
                    C.erase(C.begin()+k);
                }
                else cout<<" si nu a gasit comoara."<<endl;

                c=H.GetNrComori();
            }
        }

        cout<<endl<<"Au mai ramas "<<H.GetNrComori()<<" comori pe harta!"<<endl;
        cout<<endl<<H;

    }

}

void Joc::Castigatori()
{
    for(int i=0; i<castigatori.size(); i++)
        cout<<endl<<"Pe locul "<<i+1<<" se afla cautatorul "<<castigatori[i]<<endl;
    if(castigatori.size()==3)
        cout<<endl<<"Celalalt cautator a pierdut!"<<endl;
    else cout<<endl<<"Ceilalti cautatori au pierdut!"<<endl;
}

void Joc::CautaComori()
{
    int r=0,x;
    Start();

    cout<<"Cate runde vrei sa se simuleze?"<<endl;
    while(cin>>x && x!=0)
    {
        r=r+x;
        Runde(r);
        if(H.GetNrComori()==0 || C.size()==0)
            break;
        cout<<endl<<"Cate runde vrei sa se simuleze?"<<endl;
    }

    cout<<endl<<"*********** SFARSIT **********"<<endl;
    cout<<"Jocul s-a terminat la runda "<<runda<<"!"<<endl;

    if(H.GetNrComori()>0)
        cout<<endl<<"Nu s-au gasit toate comorile!"<<endl;
    else cout<<endl<<"S-au gasit toate comorile!"<<endl;
    Castigatori();
}

