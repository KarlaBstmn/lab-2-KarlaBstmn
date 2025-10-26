#include <iostream>

using namespace std;

//Escriba un programa que lea tres números del teclado y encuentre el número del medio entre los tres números.

//Suponga que los tres números son diferentes.

//Sugerencia: encuentre primero los valores más grandes y más pequeños.

int main () {

    int Num1;
    int Num2;
    int Num3;

    cout << "Introduzca tres numeros diferentes: " << endl;

    cin >> Num1 >> Num2 >> Num3;

    int mayor;
    int medio;
    int menor;

    if (Num1>Num2 && Num1>Num3) {
        mayor = Num1;
    } else if (Num2>Num1 && Num2>Num3) {
        mayor = Num2;
    } else {
        mayor = Num3;
    }


    if (Num1<Num2 && Num1<Num3) {
        menor = Num1;
    } else if (Num2<Num1 && Num2<Num3) {
        menor = Num2;
    } else {
        menor = Num3;
    }


    if (mayor==Num3 && menor==Num2) {
        medio = Num1;
    } else if (mayor==Num3 && menor==Num1) {
        medio = Num2;
    } else if (mayor==Num2 && menor==Num1) {
        medio = Num3;
    } else if (mayor==Num1 && menor==Num2) {
        medio = Num3;
    } else if (mayor==Num1 && menor==Num3) {
        medio = Num2;
    } else {
        medio = Num1;
    }

    cout << "El número del medio es: " << medio;
}