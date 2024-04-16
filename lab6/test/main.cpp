#include <iostream>
#include "../System.h"
#include "../Uzytkownik.h"
#include <string>
using namespace std;

int main()
{
    System* s1 = new System();
    Uzytkownik* user = new Uzytkownik("admin","admin");
    user->loguj(s1);

}
