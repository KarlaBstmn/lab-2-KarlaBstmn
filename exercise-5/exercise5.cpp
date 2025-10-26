#include <iostream>

using namespace std;

//Escriba un programa de C++ que calcule f(x) = x 3 − x 2 + 5 para x = {0, 1, 2, 3, 4, 5}

int main () {
    int valor[6] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i<6; i++) {
        int funcion = (valor[i]*valor[i]*valor[i])-(valor[i]*valor[i])+5;
        cout << "f(" << valor[i] << ") =" << funcion << endl;
    }
    return 0;
}