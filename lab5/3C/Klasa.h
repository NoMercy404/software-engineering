//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Klasa.h
//  @ Date : 08.04.2024
//  @ Author :
//
//

#include<vector>
#include "Uczen.h"
using namespace std;
#if !defined(_KLASA_H)
#define _KLASA_H


class Klasa {
public:
	void setNumer(int nr);
	int getNumer();
	Klasa(int numer);
	void getUczniowie();
	void dodajUcznia(Uczen* uczen);
	void usunUcznia(int id);
private:
	int numer;
	vector<Uczen*> uczniowie;
};

#endif  //_KLASA_H
