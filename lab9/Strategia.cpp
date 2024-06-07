#include <iostream>
#include <string>
using namespace std;
class Strategia;
class NaliczanieOprocentowania { //Kontekst - działanie
public:
    enum strategyType {empty, frank, euro, pln, dolar};
    NaliczanieOprocentowania() {strategy = NULL;}
    void setStrategy(double type, double a);
    void contextInterface();//interfejs wewnętrzny kontekstu
private:
    Strategia* strategy;
};
//---------------------------------------------------------
class Strategia { // Strategia
public:
    Strategia(double x){ value = x;}
    virtual ~Strategia(){}
    void result(){count();}
protected:
    double value;
private:
    virtual void count() = 0; // interfejs algorytmu
};
//---------------------------------------------------------
class Frank: public Strategia {//Konkretna strategia A
public:
    Frank(double a): Strategia(a) { }
private:
    void count() {
        cout << "naliczenie oprocentowania dla kredytu we Frankach = " << value*1.6657 << "\n";
    }
};
//---------------------------------------------------------
class Euro: public Strategia {//Konkretna strategia C
public:
    Euro(double a): Strategia(a) { }
private:
    void count() {
        cout << "naliczenie oprocentowania dla kredytu w Euro = " << value+value*0.03 << "\n";
    }
};
//---------------------------------------------------------
class Pln: public Strategia {//Konkretna strategia B
public:
    Pln(double a): Strategia(a) { }
private:
    void count() {
        cout << "naliczenie oprocentowania dla kredytu w Pln = " << value+value*0.021 << "\n";
    }
};
//---------------------------------------------------------
class Dolar: public Strategia {//Konkretna strategia B
public:
    Dolar(double a): Strategia(a) { }
private:
    void count() {
        cout << "naliczenie oprocentowania dla kredytu w Euro = " << value+value*0.0569 << "\n";
    }
};
//---------------------------------------------------------
void NaliczanieOprocentowania::setStrategy(double type, double a){
    delete strategy;
    if (type == strategyType::frank) strategy = new Frank(a);
    else if (type == strategyType::euro) strategy = new Euro(a);
    else if (type == strategyType::pln) strategy = new Pln(a);
    else if (type == strategyType::dolar) strategy = new Dolar(a);
}
//---------------------------------------------------------
void NaliczanieOprocentowania::contextInterface() {
    strategy->result();
}
//---------------------------------------------------------
int main() {
    NaliczanieOprocentowania context;
    unsigned int option;
    long double a,b;
    cout<<"wyjscie(0) franki(1) euro(2) zloty(3) dolar(4): ";
    cin>>option;
    while (option) {
        cout << "podaj liczbe a= ";
        cin >> a;
        context.setStrategy(option, a);
        context.contextInterface();
        cout<<"wyjscie(0) franki(1) euro(2) zloty(3) dolar(4): ";
        cin>>option;
    }
    cin.get();
    return 0;
}
