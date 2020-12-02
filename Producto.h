#ifndef PRODUCTO_C
#define PRODUCTO_C
#include <iostream>
#include <string>
using namespace std;

class Producto{
    private:
    string nombre{""};
    double precio{0.0};
    int cantidad{0};

    public:
    Producto() = default;
    Producto(string nombre, double precio, int cantidad){
        this-> nombre= nombre;
        this-> precio= precio;
        this-> cantidad = cantidad;
    }

        string getNombre(){return nombre;}
        double getPrecio(){return precio;}
        int getCantidad(){return cantidad;}

        void setNombre(string nombre){this-> nombre= nombre;}
        void setPrecio(double precio){this-> precio= precio;}
        void setCantidad(int cantidad){this-> cantidad= cantidad;}

        
};
#endif