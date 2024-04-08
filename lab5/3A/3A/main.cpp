#include <iostream>
#include "../KomisSamochodowy.h"
#include "../Pojazd.h"
#include "../Samochod.h"
#include <vector>

using namespace std;

int main()
{
    KomisSamochodowy * k1 = new KomisSamochodowy("Zlomowisko","Jana Paw³a 2/12");
    Samochod * s1= new Samochod("Ford", "Focus",144);
    s1->setSrodowisko("miasto");
    s1->setMoc(155);
    cout << "Uzytek: " << s1->getSrodowisko() <<"\n"<< "Model: " << s1->getModel() << endl;

    k1->dodajSamochod(s1);
    k1->getSamochody();
    k1->usunSamochod(0);
    k1->getSamochody();

}
