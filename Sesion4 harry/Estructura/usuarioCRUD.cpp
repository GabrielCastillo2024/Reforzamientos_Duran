#include <iostream>
using namespace std;
#include <cstdio> // para usar ficheros
#include <cstring>
#include "datos.h"

int calcularCantidadUsuarios()
{
    int numRegs;

    FILE *archi;
    archi = fopen("Estudiantes.bin", "a");
    fseek(archi, 0, SEEK_END);
    numRegs = ftell(archi) / sizeof(PERSONA);
    fclose(archi);
    return numRegs;
}

bool buscarUsuario(char cif[8])
{
    FILE *archi;
    archi = fopen("Estudiantes.bin", "r");
    PERSONA temporal;

    while (feof(archi) == 0)
    {
        fread(&temporal, sizeof(PERSONA), 1, archi);
        if (strcmp(temporal.cif, cif) == 0)
        {
            fclose(archi);
            return true;
        }
    }

    fclose(archi);
    return false;
}
void agregarUsuario(int cantidadUsuarios);
void agregarUsuario(int cantidadUsuarios)
{

    FILE *archi;
    archi = fopen("Estudiantes.bin", "a");
    PERSONA nuevaPersona;
    cout << "----------**************----------" << endl;
    cout << "Registro de nuevo usuario" << endl;
    cout << "Digite el CIF del nuevo Estudiante: " << endl;
    cin >> nuevaPersona.cif;
    cin.ignore();

    if (buscarUsuario(nuevaPersona.cif))
    {
        cout << "----------**************----------" << endl;
        cout << "El usuario ya existe" << endl;
        cout << "----------**************----------" << endl;
    }
    else
    {
        cout << "Digite el nombre del nuevo Estudiante: " << endl;
        cin.getline(nuevaPersona.nombre, 30);
        cout << "Digite la carrera: " << endl;
        cin.getline(nuevaPersona.carrera, 30);
        cin.ignore();
        cout << "Digite la edad: " << endl;
        cin >> nuevaPersona.edad;

        fwrite(&nuevaPersona, sizeof(PERSONA), 1, archi);
        fflush(stdin);
        fclose(archi);
        cantidadUsuarios++;
    }
}