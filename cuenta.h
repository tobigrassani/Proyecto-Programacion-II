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
    void set_num_cuenta(int x);
    void set_saldo(float x);
    void set_sueldo(float x);

    int get_num_cuenta();

    void deposito(float x);
    void extraccion(float x);
    

};

#endif