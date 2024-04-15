//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Uzytkownik.cpp
//  @ Date : 09.04.2024
//  @ Author :
//
//

#include <string>
#include <iostream>
using namespace std;
#include "System.h"
#include "Uzytkownik.h"

Uzytkownik::Uzytkownik(string login, string password) {
    this->login = login;
    this->haslo = password;
    this->s_pointer = nullptr;
}

void Uzytkownik::rejestruj(System* sys_pointer) {
    sys_pointer->dodajUser(this);
}

void Uzytkownik::loguj(System* sys_pointer) {
    if(sys_pointer->uwierzytelnij(this->getLogin())){
        s_pointer = sys_pointer;
        cout<<"zalogowano";
    }
    else{
        cout<<"nie zalogowano";
    }
}

void Uzytkownik::wyloguj() {
    s_pointer = nullptr;
}
string Uzytkownik::getLogin(){
    return login;
}