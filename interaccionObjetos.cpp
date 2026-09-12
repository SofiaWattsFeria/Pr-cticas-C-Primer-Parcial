#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Estudiante {
private:
    string nombre;
    string matricula;
    double promedio;
 
public:
    Estudiante() {
        nombre = "";
        matricula = "";
        promedio = 0.0;
    }
 
    Estudiante(string nombre, string matricula, double promedio) {
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }
 
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << ", Matricula: " << matricula
             << ", Promedio: " << promedio << endl;
    }
 
    double getPromedio() {
        return promedio;
    }
};
 
class Grupo {
private:
    vector<Estudiante> estudiantes;
 
public:
    void agregarEstudiante(Estudiante e) {
        estudiantes.push_back(e);
    }
 
    void mostrarEstudiantes() {
        for (Estudiante &e : estudiantes) {
            e.mostrarInformacion();
        }
    }
 
    double calcularPromedioGrupal() {
        double suma = 0;
        for (Estudiante &e : estudiantes) {
            suma += e.getPromedio();
        }
        return estudiantes.empty() ? 0 : suma / estudiantes.size();
    }
};
 
int main() {
    Estudiante e1("Sofia Watts Feria", "5198357", 8.7);
    Estudiante e2("Ana Torres Lopez", "5198211", 9.1);
    Estudiante e3("Luis Ramirez Diaz", "5198098", 6.4);
 
    Grupo grupoA;
    grupoA.agregarEstudiante(e1);
    grupoA.agregarEstudiante(e2);
    grupoA.agregarEstudiante(e3);
 
    cout << "=== Estudiantes del grupo ===" << endl;
    grupoA.mostrarEstudiantes();
 
    cout << "Promedio general del grupo: " << grupoA.calcularPromedioGrupal() << endl;
 
    return 0;
}
 
