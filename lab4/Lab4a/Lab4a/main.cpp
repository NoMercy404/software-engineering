#include <iostream>
#include "../Pacjent.h"
#include "../Szpital.h"

using namespace std;

int main()
{
    Szpital *nowySzpial = new Szpital("Szpital_kliniczny_nr_1");
    Pacjent *p1 = new Pacjent(1,"Adam","Agrest",15);
    Pacjent *p2 = new Pacjent(2,"Bartek","Birma",11);
    Pacjent *p3 = new Pacjent(3,"Czeslaw","Czubek",54);
    Pacjent *p4 = new Pacjent(4,"Damian","Dewolny",23);
    nowySzpial->dodajPacjenta(p1);
    nowySzpial->dodajPacjenta(p2);
    nowySzpial->dodajPacjenta(p3);
    nowySzpial->dodajPacjenta(p4);
    nowySzpial->getPacjenci();
}
