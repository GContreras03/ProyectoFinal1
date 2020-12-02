#ifndef CLIENTE_C
#define CLIENTE_C
#include <iostream>
#include <string>
using namespace std;

class Cliente{
    private:
    string nombre{""};
    string edad{""};
    string email{""};
    string direccion{""};

    public:
    Cliente() = default;
    Cliente(string nombre, string edad, string email, string direccion){
        this-> nombre= nombre;
        this-> edad=edad;
        this->email=email;
        this->direccion=direccion;
    }   
        
    string getNombre(){return nombre;}
    string getEdad(){return edad;}
    string getEmail(){return email;}
    string getDireccion(){return direccion;}

    void setNombre(string nombre){this-> nombre= nombre;}
    void setEdad(string edad){this-> edad=edad;}
    void setEmail(string email){this->email=email;}
    void setDireccion(string direccion){ this->direccion=direccion;}
    
};

#endif