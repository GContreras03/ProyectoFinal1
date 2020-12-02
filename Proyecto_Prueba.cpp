//Gerardo Contreras González		 A01749424
//Erick Noe Ramirez Olvera       A01753104

#include "Cliente.h"
#include "Pago.h"
#include "Producto.h"
#include "Catalogo.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "\n----------------------------------------\n" << endl;

    //Prueba clase Cliente

    Cliente c1;
    c1.setNombre("Pedro Casas");
    c1.setEdad("43");
    c1.setEmail("pedro.casas@gmail.com");
    c1.setDireccion("Casa #1 calle hojas Colonia Verdes");

    cout << "\nDatos Cliente" << endl;
    cout << "\nNombre: " << c1.getNombre() << endl;
    cout << "\nEdad: " << c1.getEdad() << endl;
    cout << "\nEmail: " << c1.getEmail() << endl;
    cout << "\nDireccion: " << c1.getDireccion()<< "\n" << endl;
    
    cout << "\n----------------------------------------\n" << endl;
    
    //Prueba Clase Pago
    
    Pago p1;
    p1.setDebito("5234-6534-1237-4566");
    p1.setCredito("3463-1233-7653-2346");
    p1.setTransbancaria("3123-6544-1234-5423");

    cout << "Numero de Tarjeta de debito: " << p1.getDebito() << endl;
    cout << "\nNumero de Tarjeta de credito: " << p1.getCredito() << endl;
    cout << "\nNumero de Tranferencia Bancaria: " << p1.getTransbancaria() << "\n" << endl;

    cout << "\n----------------------------------------\n" << endl;

    //Prueba Clase Producto

    Producto pr1;
    pr1.setNombre("chips");
    pr1.setPrecio(12.54);
    pr1.setCantidad(76);

    cout << "Producto 1" << endl;
    cout << "\nNombre: " << pr1.getNombre() << endl;
    cout << "\nPrecio: " << pr1.getPrecio() << endl;
    cout << "\nCantidad: " << pr1.getCantidad() << "\n" << endl;

    Producto pr2;
    pr2.setNombre("Jordan");
    pr2.setPrecio(2299.99);
    pr2.setCantidad(34);

    cout << "Producto 2" << endl;
    cout << "\nNombre: " << pr2.getNombre() << endl;
    cout << "\nPrecio: " << pr2.getPrecio() << endl;
    cout << "\nCantidad: " << pr2.getCantidad() << "\n" << endl;

    cout << "\n----------------------------------------\n" << endl;

    //Prueba Clase Catalogo
  
    Catalogo ct1;

    ct1.setNombre("\nCatalogo Muestra");
    ct1.setSeccion("Deportes");

    vector<Producto> inventario;
    int res {7};
    inventario.reserve(5);

    while (res != 3){
        cout << "\n" << ct1.getNombre() << endl;
        cout <<"Seccion: " << ct1.getSeccion() << "\n" << endl;
        cout << "1) Alta de Producto\n";
        cout << "2) Consulta Catalogo\n";
        cout << "3) Salir\n";
        cout << "\nOpcion: "; cin >> res;

        switch (res)
        {
            case 1:
                inventario = altaProducto(inventario);
                break;

            case 2:
                 verInventario(inventario);
                 break;
            case 3:
                cout << "Fin del programa Alta Catalogo\n";
                break;
            default:
                cout << "OPCION INVALIDA\n";
                break;
        }
    }
    
}