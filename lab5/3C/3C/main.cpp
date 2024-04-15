#include <iostream>

#include "../Klasa.h"
#include "../Szkola.h"
#include "../Uczen.h"
using namespace std;

int main()
{
    Szkola* zs1 = new Szkola("Grabski",1);
    Klasa* kl1 = new Klasa(18);
    zs1->dodajKlase(kl1);
    Uczen* u1 = new Uczen("Mateusz","Majchrowski",21,0);
    kl1->dodajUcznia(u1);
    zs1->getKlasy();
    kl1->getUczniowie();
}
