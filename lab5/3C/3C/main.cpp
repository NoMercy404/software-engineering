#include <iostream>

#include "../Klasa.h"
#include "../Szkola.h"
#include "../Uczen.h"
using namespace std;

int main()
{
    Szkola* zs1 = new Szkola("Grabski",1);
    Klasa* osiemnascie = new Klasa(18);
    zs1->dodajKlase(osiemnascie);
    Uczen* u1 = new Uczen("Mateusz","Majchrowski",21,0);
    osiemnascie->dodajUcznia(u1);
    zs1->getKlasy();
    osiemnascie->getUczniowie();
}
