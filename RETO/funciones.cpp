#include <iostream>
#include "variable.h"
#include <string>
using namespace std;

void AggLibro()
{
    cout << "Cuantos libros desea agregar: "<<endl;
    cin >> cantidadLibros;
    cin.ignore();

    for (int i = 0; i < cantidadLibros; i++)
    {
       
            
        cout << "Ingrese el titulo del libro: "<<endl;
        cin>>libroNuevo.titulo;
        cout << "Ingrese el autor del libro: "<<endl;
        cin>>libroNuevo.autor;
        cout << "Ingrese el ISBN del libro: "<<endl;
        cin >> libroNuevo.ISBN;
        cout << "Ingrese el anio del libro: "<<endl;
        cin >>libroNuevo.anio;

        libro[i] = libroNuevo;

    
        cout << endl;
    }
}

void MostrarLibro()
{
    for (int i = 0; i < cantidadLibros; i++)
    {
        cout << "Datos del libro N: " << i + 1 << endl;
        cout << "Titulo " << libro[i].titulo << endl;
        cout << "Autor " << libro[i].autor << endl;
        cout << "ISBN " << libro[i].ISBN << endl;
        cout << "Anio " << libro[i].anio << endl;
    }
}
void LibrosRecientes()
{
    for (int i = 0; i < cantidadLibros; i++)
    {
        if (libro[i].anio > 2019)
        {
            cout << "Datos del libro N: " << i + 1 << endl;
            cout << "titulo: " << libro[i].titulo << endl;
            cout << "autor: " << libro[i].autor << endl;
            cout << "ISBN : " << libro[i].ISBN << endl;
            cout << "anio: " << libro[i].autor << endl;
        }
    }
}

void Menu()
{
    int op;

    do
    {

        cout << "1. Agregar libro" << endl;
        cout << "2. Mostrar libro" << endl;
        cout << "3. Libros recientes" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: "<<endl;
        cin >> op;

        switch (op) 
        {

        case 1:
        {
            AggLibro();
            break;
        }
        case 2:
        {
            MostrarLibro();
            break;
        }
        case 3:
        {
            LibrosRecientes();
            break;
        }
        case 4:
        {
            cout << "Saliendo.... que tenga un lindo dia" << endl;
            break;
        }
        default:
        {
            cout << "opcion no valida" << endl;
            break;
        }
            op++;
        }
    } while (op != 4);
}