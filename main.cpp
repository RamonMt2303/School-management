//
//  main.cpp
//  School management
//
//  Created by Ramon Mtz on 12/05/21.
//

#include <iostream>
#include "Persona.h"

using namespace std;
int main() {
    int registro;
    cout << "¿Cuántas personas desea registrar?" << endl;
    cin >> registro;
    Persona *total[registro];
    for(int i = 0; i < registro; i++){
        int confirmacion;
        cout << "La persona que va a registrar, ¿A que grupo pertenece?" << endl;
        cout << "1 para Alumno, 2 para profesor y 3 para otros" << endl;
        cin >> confirmacion;
        if (confirmacion == 1){
            string nombre;
            int edad;
            string carrera;
            float promedio;
            int nivelEstudio;
            cout << "¿Cuál es el nombre del estudiante?" << endl;
            cin >> nombre;
            total[i] = new Alumno(nombre, edad, carrera, promedio, nivelEstudio);
        }
    }
    return 0;
}
