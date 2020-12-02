//Erick Noe Ramirez Olvera A01753104

#ifndef Negocio_C
#define Negocio_C
#include <iostream>
#include <string>
using namespace std;

class Negocio{
    private:
    string nombre;
    string sitioweb;
    string lema;
    
    public:
    Negocio()= default;
    Negocio(string nombre,string sitioweb,string lema){
        this->nombre=nombre;
        this->sitioweb=sitioweb;
        this->lema=lema;
    }
    
    string getNombre(){return nombre;}
    string getSitioweb(){return sitioweb;}
    string getLema(){return lema;}
    
    void setNombre(string nombre){this-> nombre= nombre;}
    void setSitioweb(string sitioweb){this-> sitioweb= sitioweb;}
    void setLema(string lema){this->lema= lema;}
    
};

#endif