//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Potega.cpp
//  @ Date : 22.04.2024
//  @ Author :
//
//

#include <iostream>
#include "Potega.h"
using namespace std;

long double Potega::wynikPotegi(long double pod,int wyk) {
    long double wynik = pod;
    for(int i = 1 ; i < wyk; i++){
        wynik*=pod;
    }
    return wynik;
}

Potega::Potega() {
    //cout<<"konstruktor potegi";
}

Potega::~Potega() {
    //cout<<"destruktor Potegi";
}

