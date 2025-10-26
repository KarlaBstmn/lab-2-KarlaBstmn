#include <iostream>

using namespace std;

// Modifique el programa para determinar si un número ingresado es par o impar.

int main () {
    int Num;

    cout << "Ingrese un numero: " << endl;
    cin >> Num;

    if (Num % 2 == 0) {
        cout << Num << " es par" << endl;
    } else {
        cout << Num << " es impar" << endl;
    }

}
