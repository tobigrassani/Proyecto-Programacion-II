#include "tarjeta_credito.h"

#include <iostream>
#include <string>
using namespace std;

void Tarjeta::set_num_tarjeta(int x) {
    num_tarjeta = x;
}

void Tarjeta::set_lim_compra(int x) {
    lim_compra = x;
}

void Tarjeta::set_tipo(string x) {
    tipo = x;
}

int Tarjeta::get_num_tarjeta() {
    return num_tarjeta;
}

int Tarjeta::get_lim_compra() {
    return lim_compra;
}

string Tarjeta::get_tipo() {
    return tipo;
}

string Tarjeta::tipo_tarjeta(float sueldo) {
    
    if (sueldo >= 300000) {
        
        tipo = "Oro";

    } else if (sueldo >= 200000) {
        
        tipo = "Plata";

    } else {

        tipo = "Bronce";
    }
   
    return tipo;
    
}
