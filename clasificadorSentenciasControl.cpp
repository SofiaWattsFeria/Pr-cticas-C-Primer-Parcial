#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int calificacion;
 
    cout << "=== Clasificador de calificaciones ===" << endl;
    cout << "Ingresa una calificacion entre 0 y 100: ";
    cin >> calificacion;
 
    if (calificacion < 0 || calificacion > 100) {
        cout << "Calificacion fuera de rango." << endl;
        return 0;
    }
 
    string etiqueta;
 
    if (calificacion >= 90) {
        etiqueta = "E (Excelente)";
    } else if (calificacion >= 80) {
        etiqueta = "MB (Muy Bien)";
    } else if (calificacion >= 70) {
        etiqueta = "B (Bien)";
    } else if (calificacion >= 60) {
        etiqueta = "S (Suficiente)";
    } else {
        etiqueta = "NA (No Aprobado)";
    }
 
    cout << "Calificacion: " << calificacion << " -> " << etiqueta << endl;
 
    return 0;
}
 
