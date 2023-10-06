//
//  CuentaBanco.cpp
//  ExamenProgra
//
//  Created by Sofia Schneider Jimenez on 12/1/22.
//
// SOFIA SCHNEIDER A01173896

#include "CuentaBanco.h"


CuentaBanco::CuentaBanco(){ //metodo constructor incializando atributos
    string nombre = "Sofía Schneider Jimenez";
    int saldo = 10000;
    Fecha apertura{1,12};
}


CuentaBanco::CuentaBanco(string _nombre, int _saldo, Fecha _apertura){
    nombre = _nombre;
    saldo = _saldo;
    apertura = _apertura;
    
}


void CuentaBanco::setNombre(string _nombre){
    nombre = _nombre;
}


void CuentaBanco::setSaldo(int _saldo){
    saldo = _saldo;
}


void CuentaBanco::setApertura(Fecha _apertura){
    apertura = _apertura;
}


string CuentaBanco::getNombre(){
    return nombre;
}


int CuentaBanco::getSaldo(){
    return saldo;
}


Fecha CuentaBanco::getApertura(){
    return apertura;
}


void CuentaBanco::deposito(int _deposito){
    if (_deposito > 0) {
        saldo = saldo + _deposito;
    }
    else if (_deposito < 0){
        saldo = saldo;
    }
}

void CuentaBanco::retiro(int _retiro){
    if (_retiro > 0 && saldo > _retiro){
        saldo = saldo - _retiro;
    }
    if (_retiro < 0 ){
        saldo = saldo;
    }
    if (_retiro > 0 && _retiro < saldo){
        cout << "No tiene fondos\n";
    }
}

string CuentaBanco::str(){
    return nombre + "," + to_string(saldo) + "," + apertura.str();
}
