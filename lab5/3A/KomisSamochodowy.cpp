//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : KomisSamochodowy.cpp
//  @ Date : 08.04.2024
//  @ Author :
//
//

#include <string>
using namespace std;
#include<vector>
#include "KomisSamochodowy.h"

void KomisSamochodowy::dodajSamochod(Samochod* samochod) {
    samochody.push_back(samochod);
}

void KomisSamochodowy::usunSamochod(int id) {
    for(int i = 0 ; i < samochody.size();i++){
        if(i == id){
            samochody.erase(samochody.begin()+i);
        }
    }
}

void KomisSamochodowy::getSamochody() {
    for(int i = 0 ; i < samochody.size();i++){
        cout<<samochody[i]->getMarka()<<"|"<<samochody[i]->getModel()<<"|"<<samochody[i]->getMoc()<<"\n";
    }
}

KomisSamochodowy::KomisSamochodowy(string nazwa, string adres) {
    this->nazwa = nazwa;
    this->adres = adres;
}
