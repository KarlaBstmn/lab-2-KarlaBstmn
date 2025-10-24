#include <iostream>
using namespace std;

//Escriba un programa que lea tres números enteros del teclado. 
//Imprima la suma, el promedio, el producto, el más pequeño y el más grande de estos números.

int main() {

    int lista[3];
    int suma = 0;
    float prom;
    int prod = 1;
    
        cout << "Introduce el primer valor" << endl;
        cin >> lista[0];

        cout << "Introduce el segundo valor" << endl;
        cin >> lista[1];

        cout << "Introduce el tercer valor" << endl;
        cin >> lista[2];

    int min = lista[0];
    int max = lista[0];


    for (int i = 0; i < 3; i++) {
        suma = suma+lista[i]; 
    }
    cout << "La suma es: " << suma << endl;

        prom = suma/3;
    cout << "El promedio es: " << prom << endl;

    for (int i = 0; i < 3; i++) {
        prod = prod*lista[i];
    }
    cout << "El producto es: " << prod << endl;

    for (int i = 0; i < 3; i++) {
        if(min>lista[i]) {
            min = lista[i];
        }
    }
    cout << "El numero pequeno es: " << min << endl;

    for (int i = 0; i < 3; i++) {
        if(max<lista[i]) {
            max = lista[i]; 
        }
    }
    cout << "El numero grande es: " << max << endl;
}

