#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, discr, x1, x2;
    cout << "Ingrese a: ";
    cin >> a;
    while (a == 0) {
        cout << "Valor inválido. Ingrese a: ";
        cin >> a;
    }

    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;

    discr = pow(b,2) - (4*a*c);
    while (discr < 0) {
        cout << "Discriminante negativo. No existe solución para los valores declarados." << endl;
        cout << "Ingrese de nuevo los siguientes valores..." << endl;
        cout << "Ingrese b: ";
        cin >> b;
        cout << "Ingrese c: ";
        cin >> c;
        discr = pow(b,2) - (4*a*c);
    }

    x1 = (-b + sqrt(discr)) / 2*a;
    if (discr == 0) {
        cout << "X = " + to_string(x1) << endl;
    } else {
        x2 = (-b - sqrt(discr)) / 2*a;
        cout << "X1 = " + to_string(x1) << endl;
        cout << "X2 = " + to_string(x2) << endl;
    }
}
