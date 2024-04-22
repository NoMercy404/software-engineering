#include <iostream>
#include "../Bernouli.h"

using namespace std;

int main()
{
    Bernouli* berni = new Bernouli();
    cout<<"Wynik :"<<berni->obliczWyniki(4,2,0.6);
}
