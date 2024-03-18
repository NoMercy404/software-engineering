#include <iostream>

using namespace std;
#include "../Firma.h"
#include "../Pracownik.h"
#include <iostream>
#include<vector>

int main()
{
    Firma *f1 = new Firma("JanuszexPL",2002);
    Pracownik *p1 = new Pracownik("Adrian","Drzazgowski",0);
    Pracownik *p2 = new Pracownik("Mateusz","Majchrowski",1);
    Pracownik *p3 = new Pracownik("Patryk","Oleszek",2);
    Pracownik *p4 = new Pracownik("Maciej","Tyszczuk",3);
    f1->dodajPracownika(p1);
    f1->dodajPracownika(p2);
    f1->getPracownicy();
    f1->dodajPracownika(p3);
    f1->dodajPracownika(p4);
    f1->getPracownicy();
    f1->usunPracownika(1);
    f1->getPracownicy();
    cout<<p2->getIdPracownika();

}
