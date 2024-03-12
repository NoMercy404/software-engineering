#include <iostream>
#include "../zoologiczny/Jamnik.h"
using namespace std;

int main()
{
    Jamnik azor("Kazik","szary");
    cout<<"Pies nazywa sie "<<azor.getNazwa()<<" a jest koloru "<<azor.getKolor()<<"\n";
    azor.szczeknij();

}
