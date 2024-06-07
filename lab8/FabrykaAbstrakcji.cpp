#include <iostream>
using namespace std;
class Laptop {
public:
    virtual void wyswietl() = 0 ;
    virtual ~ Laptop(){};
};
//---------------------------------------------------------
class PC {
public:
    virtual void wyswietl() = 0 ;
    virtual ~ PC(){};
};
//---------------------------------------------------------
class LaptopSSD : public Laptop {
private:
    void wyswietl() {
        cout << "Laptop SSD" << endl ;
    }
};
//---------------------------------------------------------
class PCSSD : public PC {
private:
    void wyswietl() {
        cout << "Personal Computer SSD" << endl;
    }
};
//---------------------------------------------------------
class PCHDD : public PC {
private:
    void wyswietl() {
        cout << "Personal Computer HDD" << endl ;
    }
};
//---------------------------------------------------------
class LaptopHDD : public Laptop {
private:
    void wyswietl() {
        cout << "Laptop HDD" << endl ;
    }
};
//---------------------------------------------------------
class DISKFactory {
private:
    virtual Laptop* fLaptop() = 0;
    virtual PC* fPC() = 0;
public:
    virtual ~ DISKFactory(){};
};
//---------------------------------------------------------
class SSDFactory : public DISKFactory {
public:
    Laptop* fLaptop() {
        return new LaptopSSD ;
    }
    PC* fPC() {
        return new PCSSD ;
    }
};
//---------------------------------------------------------
class HDDFactory : public DISKFactory {
public:
    Laptop* fLaptop() {
        return new LaptopHDD() ;
    }
    PC* fPC() {
        return new PCHDD() ;
    }
};
//---------------------------------------------------------
int main()
{
    SSDFactory *df1;
    HDDFactory *df2;
    PC *id1;
    Laptop *id2;

    df1 = new SSDFactory;
    id1 = df1->fPC() ;
    id1->wyswietl() ;

    df2 = new HDDFactory;
    id2 = df2->fLaptop() ;
    id2->wyswietl() ;
    cin.get();
    return 0;
}