//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Paliwo.cpp
//  @ Date : 18.03.2024
//  @ Author :
//
//


#include "Paliwo.h"
#include <string>
using namespace std;

Paliwo::Paliwo(string nazwa, string rodzaj, int liczbaOktanowa) {
    this->nazwa = nazwa;
    this->rodzaj= rodzaj;
    this->liczbaOktanowa = liczbaOktanowa;
}

void Paliwo::setNazwa(string nazwa) {
    this->nazwa = nazwa;
}

void Paliwo::setRodzaj(string rodzaj) {
    this->rodzaj = rodzaj;
}

void Paliwo::setLiczbaOktanowa(int oktany) {
    this->liczbaOktanowa = oktany;
}

string Paliwo::getNazwa() {
    return nazwa;
}

string Paliwo::getRodzaj() {
    return rodzaj;
}

int Paliwo::getLiczbaO() {
    return liczbaOktanowa;
}

