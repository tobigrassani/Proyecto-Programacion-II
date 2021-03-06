#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
#include <string>
using namespace std;

class Cuenta{
    
    private:
    
    int num_cuenta = 0;
    float saldo = 0;
    float sueldo = 0;
    
    public:

    Cuenta() = default;
    void set_num_cuenta(int numc);
    void set_saldo(float sa);
    void set_sueldo(float su);

    float get_sueldo();
    
    void alta_cuenta();
    void mostrar_cuenta();
    void deposito(float x);
    void extraccion(float x);
    

};

#endif