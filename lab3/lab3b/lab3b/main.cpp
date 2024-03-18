#include <iostream>

#include "../Kierowca.h"
#include "../Samochod.h"
using namespace std;

int main()
{
    Kierowca *kierowca1 = new Kierowca("Waldek","Gulas");
    Samochod *samochod1 = new Samochod("Fiat","Punto");
    kierowca1->dodajSamochod(samochod1);
    kierowca1->getSamochody();
}
