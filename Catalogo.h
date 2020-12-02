#ifndef CATALOGO_C
#define CATALOGO_C
#include "Producto.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Producto>& altaProducto(vector<Producto>& products){
    Producto produc;
    string nombre;
    double precio;
    int cantidad;

    cout << "\nDime el nombre del producto: "; cin >> nombre;
    cout << "Dime el precio del producto: "; cin >> precio;
    cout << "Dime el numero de piezas: "; cin >> cantidad;
    cout << "\n----------------------------------------\n" << endl;

    produc = Producto{nombre,precio,cantidad};
    products.push_back(produc);
    return products;   
}
    
void verInventario(vector<Producto>& producs){
    for(int i=0; i < producs.size(); i++){
        cout << "\nProducto" << to_string(i+1) << endl;
        cout << "\nNombre: " << producs[i].getNombre() << endl;
        cout << "Precio: " << producs[i].getPrecio() << endl;
        cout << "Cantidad: " << producs[i].getCantidad() << endl;
        cout << "\n----------------------------------------\n" << endl;
    }
}

class Catalogo{
    private:
    string nombre{""};
    string seccion{""};
    vector<Producto> inventario{};

    public:
    Catalogo() = default;
    Catalogo(string nombre,string seccion,vector<Producto> inventario){
        this->nombre=nombre;
        this->seccion=seccion;
        this->inventario=inventario;
    }

    void setNombre(string nombre){this->nombre=nombre;}
    void setSeccion(string seccion){this->seccion=seccion;}
    

    string getNombre(){return nombre;}
    string getSeccion(){return seccion;}
    
};

#endif
