#include <iostream>
#include "../System.h"
#include "../Uzytkownik.h"
#include <string>
using namespace std;

int main()
{
    string log,has;
    cout<<"Login ";
    cin>>log;
    cout<<"Haslo ";
    cin>>has;

    System* s1 = new System();
    Uzytkownik* u1 = new Uzytkownik(log,has);
    if(!s1->uwierzytelnij(u1->getLogin())){
        int x = 3;
        while(x!=9){
            cout<<"\n Co zrobic? 0-zaloguj ponownie 1-zarejestruj 9- wyjdz\n";
            cin>>x;
            if(x== 0){
                string new_log,new_has;
                cout<<"Login ";
                cin>>new_log;
                cout<<"Haslo ";
                cin>>new_has;
                Uzytkownik* u2 = new Uzytkownik(log,has);
                u1->loguj(s1);
            }
            else if(x==1){
                u1->rejestruj(s1);
            }
        }
    }

}
