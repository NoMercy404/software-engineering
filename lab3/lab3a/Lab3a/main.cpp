#include <iostream>

using namespace std;
#include <iostream>
#include "../Paliwo.h"
#include "../Samochod.h"
using namespace std;

int main()
{
    Paliwo *die1 = new Paliwo("paliwo_nr_1","Diesel",51);
    Paliwo *ben1 = new Paliwo("paliwo_nr_2","Benzyna",98);
    Samochod *s1 = new Samochod("Lexus","RX350","Benzyna",2009);
    cout<<"Poruszam sie samochodem "<<s1->getMarka()<<" "<<s1->getModel()<<"\n";
    cout<<"Po zalaniu Diesel'a\n";
    s1->wyrusz(die1);
    cout<<"Po zalaniu Benzyny\n";
    s1->wyrusz(ben1);

}
