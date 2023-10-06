//
//  Fecha.cpp
//  ExamenProgra
//
//  Created by Sofia Schneider Jimenez on 12/1/22.
//
// SOFIA SCHNEIDER A01173896

#include "Fecha.h"

Fecha::Fecha(){ //metodo constructor incializando valores
    mes = 1;
    dia = 1;
}

Fecha::Fecha(int _dia, int _mes){
    dia = _dia;
    mes = _mes;
}

void Fecha::setDia(int _dia){
    dia=_dia;
}

void Fecha::setMes(int _mes){
    mes=_mes;
}

int Fecha::getDia(){
    return dia;
}

int Fecha::getMes(){
    return mes;
}

string Fecha::str(){
    string fecha;
    
    if (dia < 10) {
        fecha = "0" + to_string(dia) + "/";
    }
    
    if (mes < 10){
        fecha = fecha + "0" + to_string(mes);
    }
    
    if (dia > 10){
        fecha = to_string(dia) + "/";
    }

    if (mes > 10){
        fecha = fecha + to_string(mes);
    }
    
    return fecha;
}
