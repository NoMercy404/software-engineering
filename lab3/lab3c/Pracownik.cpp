//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Pracownik.cpp
//  @ Date : 18.03.2024
//  @ Author :
//
//


#include <string>
using namespace std;
#include "Pracownik.h"


Pracownik::Pracownik(string imie, string nazwisko,int idPracownika) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->idPracownika = idPracownika;
}

string Pracownik::getImie() {
    return imie;
}

string Pracownik::getNazwisko() {
    return nazwisko;
}
int Pracownik::getIdPracownika(){
    return idPracownika;
}
