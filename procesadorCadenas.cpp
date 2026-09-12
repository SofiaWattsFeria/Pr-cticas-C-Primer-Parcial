#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string frase;
 
    cout << "=== Procesador de cadenas ===" << endl;
    cout << "Escribe una frase: ";
    getline(cin, frase);
 
    // Contar palabras
    int totalPalabras = 0;
    bool dentroDePalabra = false;
    for (char letra : frase) {
        if (letra != ' ' && !dentroDePalabra) {
            dentroDePalabra = true;
            totalPalabras++;
        } else if (letra == ' ') {
            dentroDePalabra = false;
        }
    }
 
    // Contar vocales
    int totalVocales = 0;
    for (char letra : frase) {
        char minuscula = tolower(letra);
        if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' ||
            minuscula == 'o' || minuscula == 'u') {
            totalVocales++;
        }
    }
 
    // Invertir la frase
    string fraseInvertida = "";
    for (int i = frase.size() - 1; i >= 0; i--) {
        fraseInvertida += frase[i];
    }
 
    cout << "Numero de palabras: " << totalPalabras << endl;
    cout << "Numero de vocales: " << totalVocales << endl;
    cout << "Frase invertida: " << fraseInvertida << endl;
 
    return 0;
}
 
