#include <iostream>

using namespace std;

int main () {
    int dig1;
    cout << "Introduzca el primer digito: " << endl;
    cin >> dig1;

    int dig2;
    cout << "Introduzca el segundo digito: " << endl;
    cin >> dig2;

    int dig3;
    cout << "Introduzca el tercer digito: " << endl;
    cin >> dig3;
    int num = (dig1*100)+(dig2*10)+dig3;

    cout << "Dígitos juntos: " << num;
}