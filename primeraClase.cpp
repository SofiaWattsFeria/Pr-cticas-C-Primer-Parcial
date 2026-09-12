#include <iostream>
#include <string>
using namespace std;
 
class Estudiante {
private:
    string nombre;
    string matricula;
    double promedio;
 
public:
    Estudiante(string nombre, string matricula, double promedio) {
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }
 
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }
 
    bool estaEnRiesgoAcademico() {
        return promedio < 7.0;
    }
};
 
int main() {
    Estudiante alumna("Sofia Watts Feria", "5198357", 8.7);
 
    alumna.mostrarInformacion();
 
    if (alumna.estaEnRiesgoAcademico()) {
        cout << "La alumna esta en riesgo academico." << endl;
    } else {
        cout << "La alumna no esta en riesgo academico." << endl;
    }
 
    return 0;
}
 
