#include <iostream>
using namespace std;

int sumar(int num1, int num2);
int restar(int num1, int num2);
void suma();
void resta();

int sumar()
{

    int num1, num2;
    cout <<"-------Suma----------\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "La suma es: " << num1 + num2 << endl;
}
int restar()
{

    int num1, num2;
    cout <<"-------Resta----------\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "La resta es: " << num1 - num2 << endl;
}
void suma()
{
    sumar();
}
void resta()
{
    restar();
}