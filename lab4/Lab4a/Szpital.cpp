//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Szpital.cpp
//  @ Date : 19.03.2024
//  @ Author :
//
//


#include "Szpital.h"
#include <string>
#include <iostream>
using namespace std;

void Szpital::dodajPacjenta(Pacjent* pacjent) {
    pacjenci.push_back(pacjent);
}

void Szpital::usunPacjenta(int idPacjenta) {
    for(int i = 0 ; i < pacjenci.size();i++){
        if(i == idPacjenta){
            pacjenci.erase(pacjenci.begin()+i);
        }
    }
}

void Szpital::getPacjenci() {
    for(int i = 0 ; i < pacjenci.size();i++){
        cout<<pacjenci[i]->getId()<<"|"<<pacjenci[i]->getImie()<<"|"<<pacjenci[i]->getNazwisko()<<"|"<<pacjenci[i]->getWiek()<<"\n";
    }
}

Szpital::Szpital(string nazwa) {
    this->nazwaSzpitala = nazwa;
}
