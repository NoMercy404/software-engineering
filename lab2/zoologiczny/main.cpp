#include <iostream>
#include <string>
#include "../Jamnik.h"

using namespace std;

int main()
{
    Jamnik * jamnik = new Jamnik("Max", "Adrian", 3);
    cout << jamnik->getImie() << endl;
    jamnik->wydajGlos();
    jamnik->wykonajSztuczke();
    jamnik->setWaga(5.7);
    cout << jamnik->getWaga() << endl;
    return 0;
}
