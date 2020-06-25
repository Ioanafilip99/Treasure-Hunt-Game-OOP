#include <iostream>
#include <windows.h>
#include "joc.h"
using namespace std;

int main()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 11);
    Joc TreasureHunt;
    TreasureHunt.CautaComori();
    return 0;
}
