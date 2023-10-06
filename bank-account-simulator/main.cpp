//
//  main.cpp
//
//
//  Created by Ma. Guadalupe Roque Díaz de León
//
#include <iostream>
#include "Fecha.h"
#include "CuentaBanco.h"




void inflacion(CuentaBanco arrBanco[], int size){
    for (int index = 0; index < size; index++){ //retirar monto a cada cuenta
        int saldo = arrBanco[index].getSaldo();
        
        if (saldo > 1000 && saldo <= 5000){
            saldo = saldo - 5;
        }
        else if (saldo > 5000){
            saldo = saldo - 10;
        }
        
        arrBanco[index].setSaldo(saldo);
        cout << arrBanco[index].str() << endl;
    }
}



int main(int argc, const char * argv[]) {
    Fecha hoy, ayer;
   
    CuentaBanco arrBanco[] = { CuentaBanco("Mexico", 1000, Fecha{28,11}),
        CuentaBanco("Argentina", 1000, Fecha{29,11}),
        CuentaBanco("Alemania", 5000, Fecha{30,11}),
        CuentaBanco("Brasil",  5000, Fecha{11,12}),
    };
    
    CuentaBanco lugar{"Katar 2022", 1000, Fecha{20,11}};
    
    int opcion;
    
    cin >> opcion;
    while (opcion != 0){
        switch (opcion) {
            case 1://setDia y setMes 10 ptos
                hoy = Fecha{10,10};
                hoy.setDia(5);
                hoy.setMes(12);
                break;
                
            case 2: // getDia( ) , getMes( ) 5 ptos
                cout << hoy.getDia() << endl;
                cout << hoy.getMes() << endl;
                break;
                
            case 3:// str( ) 10 ptos
                cout << hoy.str( ) << endl;
                break;
                
            case 4: // 10 ptos
                lugar = CuentaBanco{};
                lugar = CuentaBanco{"Katar", 2022, Fecha{20,11}};
                cout << lugar.str() << endl;
                break;
                
            case 5: // 10 sets ptos
                lugar.setNombre("Monterrey");
                lugar.setSaldo(3000);
                lugar.setApertura(Fecha{31,12});
                cout << lugar.str() << endl;
                break;
                
            case 6: // 10 ptos
                cout << lugar.getNombre() << '$' << lugar.getSaldo() << '-' << lugar.getApertura().str() << endl;
                break;
                
            case 7:// 10 ptos
                lugar.deposito(5);
                lugar.deposito(-1000);
                cout << lugar.str() << endl;
                break;
                
            case 8: // 10 ptos
                lugar.retiro(-1000);
                lugar.retiro(5);
                cout << lugar.str() << endl;
                break;
            
            case 9: // 10 ptos
                cout << CuentaBanco{"Argentina", 2022, Fecha{11,12}}.str() << endl;
                break;
                
            case 10: 
                inflacion(arrBanco, 4);
                break;
      
            default:
                break;
        }
        
        cin >> opcion;
    }
    return 0;
}
