//
//  CuentaBanco.h
//  ExamenProgra
//
//  Created by Sofia Schneider Jimenez on 12/1/22.
//
// SOFIA SCHNEIDER A01173896

#ifndef CuentaBanco_h
#define CuentaBanco_h

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Fecha.h"

using namespace std;

class CuentaBanco{
    
private:
    string nombre; //nombre de cliente
    int saldo;      //saldo de cliente
    Fecha apertura;     //fecha en que se abre la cuenta
    
public:
    CuentaBanco();
    CuentaBanco(string _nombre, int _saldo, Fecha _apertura);
    void setNombre(string _nombre);
    void setSaldo(int _saldo);
    void setApertura(Fecha _apertura);
    
    string getNombre();
    int getSaldo();
    Fecha getApertura();
    
    void deposito(int _deposito);
    void retiro(int _retiro);

    string str();
};


#endif /* CuentaBanco_h */
