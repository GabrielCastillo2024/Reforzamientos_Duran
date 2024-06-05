#include <windows.h>
#include<iostream>//para utilizar cout y cin
using namespace std;
#include <cstdio>// para usar ficheros
#include "usuarioCRUD.cpp"

void menu();

int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    int cantidadUsuarios = calcularCantidadUsuarios();
    menu(cantidadUsuarios);
    return 0;
}

void menu(int cantidadUsuarios){
    int opcion=0;
    do
    {
    cout<<"1. Agregar persona"<<endl;
    cout<<"2. Mostrar personas"<<endl;
    cout<<"3. editar persona"<<endl;
    cout<<"4. eliminar persona"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Escoja:  ";
    cin>>opcion;

    switch (opcion)
    {
        case 1:
        agregarUsiario(cantidadUsuarios);
        break;
        case 2:
        cout<<"mostrar"<<endl;
        break;
        case 3:
        cout<<"editar"<<endl;
        break;
        case 4:
        cout<<"eliminar"
        break;
        case 5:
        cout<<"adios"<<endl;
        break;
        default:
        cout<<"opcion no valida"<<endl;
        break;

        
    } while (opcion!=5);
    
  


}
}
