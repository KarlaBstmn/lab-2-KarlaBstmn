#include <iostream>
using namespace std;

// Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo.

int main () {
    int primerNum;
    int segundoNum;
    cout << "Ingrese dos enteros: " << endl;
    cin >> primerNum >> segundoNum;
    
    if (primerNum % segundoNum == 0) {
        cout << primerNum << " es un multiplo de " << segundoNum;
    } else {
        cout << primerNum << " no es un multiplo de " << segundoNum;
    }
        
}