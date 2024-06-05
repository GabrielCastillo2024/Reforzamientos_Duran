#include <iostream>
#include <string>
using namespace std;
#define MAX 30


int cantidadLibros=0;

struct LIBRO
{
    string titulo;
    string autor;
    int ISBN=0;
    int anio=0; 
};

LIBRO libro[MAX];
LIBRO libroNuevo;


void AggLibro();
void MostrarLibro();
void LibrosRecientes();

void Menu();

