//
//  Fecha.h
//  ExamenProgra
//
//  Created by Sofia Schneider Jimenez on 12/1/22.
//
//SOFIA SCHNEIDER A01173896

#ifndef Fecha_h
#define Fecha_h

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Fecha{
    
private:
    int dia;
    int mes;
    
    
public:
    Fecha();
    Fecha(int _dia, int _mes);
    void setDia(int _dia);
    void setMes(int _mes);
    
    
    int getDia();
    int getMes();
    string str();
};



#endif /* Fecha_h */
