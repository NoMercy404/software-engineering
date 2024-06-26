//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bernouli.cpp
//  @ Date : 22.04.2024
//  @ Author :
//
//

#include "SymbolNewtona.h"
#include "Bernouli.h"
#include <iostream>
using namespace std;

Bernouli::Bernouli() {
    this->potega = new Potega();
    this->symbol = new SymbolNewtona();
}

long double Bernouli::obliczWyniki(int n,int k, long double p) {
    long double res = symbol->wynikNewtona(n,k)*potega->wynikPotegi(p,k)*potega->wynikPotegi(1-p,n-k);
    return res;
}

Bernouli::~Bernouli() {
    delete potega;
    delete symbol;
}

