#include <iostream>
#include <string>
#include "../Program.h"
#include "../Watek.h"

using namespace std;

int main()
{
    Program* prog1 = new Program("test1");
    cout<<prog1->getNazwa()<<"\n";
    cout<<prog1->getWatekId();
    prog1->~Program();

}
