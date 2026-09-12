#include <iostream>
using namespace std;
 
int main() {
    double numeroA, numeroB, resultado;
    char signo;
 
    cout << "=== Calculadora de consola ===" << endl;
    cout << "Escribe el primer numero: ";
    cin >> numeroA;
 
    cout << "Escribe el operador (+, -, *, /): ";
    cin >> signo;
 
    cout << "Escribe el segundo numero: ";
    cin >> numeroB;
 
    bool operacionValida = true;
 
    switch (signo) {
        case '+':
            resultado = numeroA + numeroB;
            break;
        case '-':
            resultado = numeroA - numeroB;
            break;
        case '*':
            resultado = numeroA * numeroB;
            break;
        case '/':
            if (numeroB == 0) {
                cout << "No se puede dividir entre cero." << endl;
                operacionValida = false;
            } else {
                resultado = numeroA / numeroB;
            }
            break;
        default:
            cout << "Operador no reconocido. Usa +, -, * o /." << endl;
            operacionValida = false;
    }
 
    if (operacionValida) {
        cout << "Resultado: " << numeroA << " " << signo << " " << numeroB
             << " = " << resultado << endl;
    }
 
    return 0;
}
 
