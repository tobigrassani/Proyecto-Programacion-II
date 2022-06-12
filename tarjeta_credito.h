#pragma once

#include <iostream>
#include <string>
using namespace std;

class Tarjeta{
    
    private:

    int num_tarjeta;
    int lim_compra;
    string tipo;
    
    public:

    Tarjeta() = default;

    void set_num_tarjeta(int x);
    void set_lim_compra(int x);
    void set_tipo(string x);

    int get_num_tarjeta();
    int get_lim_compra();
    string get_tipo();

    void tipo_tarjeta(float sueldo);

};