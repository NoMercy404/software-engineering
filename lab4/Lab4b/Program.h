//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Program.h
//  @ Date : 08.04.2024
//  @ Author :
//
//

#include <string>
#include <iostream>
using namespace std;
#if !defined(_PROGRAM_H)
#define _PROGRAM_H
#include "Watek.h"

class Program {
public:
	string getNazwa();
	int getWatekId();
	Program(string nazwa);
	~Program();

private:
	string nazwa;
	Watek* watek;
};

#endif  //_PROGRAM_H