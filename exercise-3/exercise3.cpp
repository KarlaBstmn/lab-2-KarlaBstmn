#include <iostream>

using namespace std;

//Escriba un programa que ingrese un número de cinco dígitos.

//Divida el número en sus dígitos individuales e imprima los dígitos separados entre sí por tres espacios cada uno.

int main () {

    int numEntero;
    cout << "Introduzca un número entero de cinco dígitos: " << endl;
    cin >> numEntero;

    int d1 = (numEntero / 10000);
    int d2 = (numEntero/1000)%10;
    int d3 = (numEntero/100)%10;
    int d4 = (numEntero/10)%10;
    int d5 = numEntero%10;

    cout << "Dígitos separados: ";
    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5;

}