#include <iostream>
#include "variable.h"

using namespace std;
void menu();
void menu(){
cout<<"1. Ingrese un nuevo auto"<<endl;
cout<<"2. Mostrar los autos ingresados"<<endl;
cout<<"3. Salir"<<endl;
cout<<"Ingrese su opcion: "<<endl;

}

int main(){
    
    int indice=0;
    int opcion;

    do
    {
    system("cls || clear");
    menu();
    cin>>opcion;

switch (opcion)
{
    case 1:
        cout<<"Ingresa la marca del auto: "<<endl;
        cin>>nuevoAuto.marca;
        cout<<"Ingresa el modelo del auto: "<<endl;
        cin>>nuevoAuto.modelo;
        cout<<"Ingrese el anio del auto: "<<endl;
        cin>>nuevoAuto.anio;
        cout<<"Ingrese la placa del auto: "<<endl;
        cin>>nuevoAuto.placa;

        arregloAutos[indice]=nuevoAuto;
        indice++;
            system("pause");
    break;

    case 2:
    for (int i = 0; i < indice; i++)
    {
        cout<<"Marca: "<<arregloAutos[i].marca<<endl;
        cout<<"Modelo: "<<arregloAutos[i].modelo<<endl;
        cout<<"Anio: "<<arregloAutos[i].anio<<endl;
        cout<<"Placa: "<<arregloAutos[i].placa<<endl;
            system("pause");
    }

    case 3:
    cout<<"Hola mundo!!!!!"<<endl;
            system("pause");
    break;  
    default:
    cout<<"Opcion invalida"<<endl;
            system("pause");
    break;
}

} while (opcion!=3);
  
}