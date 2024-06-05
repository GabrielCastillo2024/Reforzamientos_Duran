#include <iostream>
#define MAX 100
using namespace std;

struct PERSONA
{
    char nombre[50];
    char apellido[20];
    char cif[20];
    char correo[50];
    float promedio;
};

PERSONA estudiante[MAX];
PERSONA nuevoEstudiante;

int main()
{
    
    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        cout << "Ingrese el nombre del estudiante: " << endl;
        cin >> nuevoEstudiante.nombre;
        cout << "Ingrese el apellido del estudiante: " << endl;
        cin >> nuevoEstudiante.apellido;
        cout << "Ingrese el cif del estudiante: " << endl;
        cin >> nuevoEstudiante.cif;
        cout << "Ingrese el correo del estudiante: " << endl;
        cin >> nuevoEstudiante.correo;
        cout << "ingrese el promedio del estudiante: " << endl;
        cin >> nuevoEstudiante.promedio;

        estudiante[i] = nuevoEstudiante;
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < cantidadEstudiantes; i++)
    {
        cout << "Datos de Estudiante N " << i + 1 << endl;
        cout << "Nombre: " << estudiante[i].nombre << endl;
        cout << "Apellido: " << estudiante[i].apellido << endl;
        cout << "CIF: " << estudiante[i].cif << endl;
        cout << "correo: " << estudiante[i].correo << endl;
        cout << "Promedio:" << estudiante[i].promedio << endl;
    }

    cout << "Ingrese el nombre del estudiante: " << endl;
    cin >> nuevoEstudiante.nombre;
    cout << "Ingrese el apellido del estudiante: " << endl;
    cin >> nuevoEstudiante.apellido;
    cout << "Ingrese el cif del estudiante: " << endl;
    cin >> nuevoEstudiante.cif;
    cout << "Ingrese el correo del estudiante: " << endl;
    cin >> nuevoEstudiante.correo;
    cout << "Ingrese el promedio del estudiante: " << endl; 
    cin >> nuevoEstudiante.promedio; 

    cout << "************************************************" << endl;

    cout << "Nombre: " << nuevoEstudiante.nombre << endl;
    cout << "Apellido: " << nuevoEstudiante.apellido << endl;
    cout << "CIF: " << nuevoEstudiante.cif << endl;
    cout << "Correo: " << nuevoEstudiante.correo << endl;
    cout << "Promedio: " << nuevoEstudiante.promedio << endl;

    return 0;
}
