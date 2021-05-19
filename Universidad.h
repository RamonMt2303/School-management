//
//  Universidad.h
//  School management
//
//  Created by Ramon Mtz on 19/05/21.
//

#ifndef Universidad_h
#define Universidad_h
#include <iostream>
#include "Persona.h" //Biblioteca con mis objetos a usar

using namespace std;

class Universidad{
    
    //Declaración de las variables privadas
private:
    int registro;
public:
    Universidad(){
        this -> registro = 0;
    }
    int getRegistro(){
        return this -> registro;
    }
    void setRegistro(int _registro){
        this -> registro = _registro;
    }
    void llenarDatos(){
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
            int registrarAlumno;
            cout << "Ingrese 1 para añadir un nuevo alumno a la lista de alumnos, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
            cin >> registrarAlumno;
            Persona *Alumnos[registrarAlumno];
            while(registrarAlumno != 0){
                for (int i=0;i<registrarAlumno;i++){
                    string nombre;
                    int edad;
                    string carrera;
                    float promedio;
                    int nivelEstudio;
                    cout << "¿Cuál es el nombre del estudiante?" << endl;
                    cin >> nombre;
                    cout << "¿Cuál es su edad?" << endl;
                    cin >> edad;
                    cout << "¿Qué carrera está estudiando?" << endl;
                    cin >> carrera;
                    cout << "¿Qué promedio lleva acumulado en toda la carrera?" << endl;
                    cin >> promedio;
                    cout << "¿En qué semestre está actualmente?" << endl;
                    cin >> nivelEstudio;
                    total[i] = new Alumno(nombre, edad, carrera, promedio, nivelEstudio);
                    Alumnos[i] = new Alumno(nombre, edad, carrera, promedio, nivelEstudio);
                    cout << "Ingrese 1 para añadir un nuevo alumno a la lista de alumnos, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
                    cin >> registrarAlumno;
                }
            }
        }
            else if (confirmacion == 2){
                int registrarProfesor;
                cout << "Ingrese 1 para añadir un nuevo profesor a la lista de profesores, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
                cin >> registrarProfesor;
                Persona *Profesores[registrarProfesor];
                while(registrarProfesor != 0){
                    for (int i=0;i<registrarProfesor;i++){
                        string nombre;
                        int edad;
                        string materia;
                        float salario;
                        int grupos;
                        string especialidad;
                        string celular;
                        cout << "¿Cuál es el nombre del profesor?" << endl;
                        cin >> nombre;
                        cout << "¿Cuál es su edad?" << endl;
                        cin >> edad;
                        cout << "¿Qué materia se encarga de impartir?" << endl;
                        cin >> materia;
                        cout << "¿Cuál es su salario?" << endl;
                        cin >> salario;
                        cout << "¿De cuántos grupos se encarga de dar clase?" << endl;
                        cin >> grupos;
                        cout << "¿En qué área se especializó?" << endl;
                        cin >> especialidad;
                        cout << "¿Cuál es su número telefónico?" << endl;
                        cin >> celular;
                        total[i] = new Profesor(nombre, edad, materia, salario, grupos, especialidad, celular);
                        Profesores[i] = new Profesor(nombre, edad, materia, salario, grupos, especialidad, celular);
                        cout << "Ingrese 1 para añadir un nuevo profesor a la lista de profesores, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
                        cin >> registrarProfesor;
                    }
                }
            }
            else if (confirmacion == 3){
                int registrarLimpieza;
                cout << "Ingrese 1 para añadir un nuevo personal de limpieza a la lista de limpieza, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
                cin >> registrarLimpieza;
                Persona *personalLimpieza[registrarLimpieza];
                while(registrarLimpieza != 0){
                    for (int i=0;i<registrarLimpieza;i++){
                        string nombre;
                        int edad;
                        string actividades;
                        float salario;
                        int salones;
                        string celular;
                        string estudios;
                        cout << "¿Cuál es el nombre del encargado de limpieza?" << endl;
                        cin >> nombre;
                        cout << "¿Cuál es su edad?" << endl;
                        cin >> edad;
                        cout << "¿Qué actividad se encarga de realiza?" << endl;
                        cin >> actividades;
                        cout << "¿Cuál es su salario?" << endl;
                        cin >> salario;
                        cout << "¿Cuántos salones se encarga de limpiar?" << endl;
                        cin >> salones;
                        cout << "¿Qué nivel de estudios tiene? (Secundaria, Preparatoria, etc)" << endl;
                        cin >> estudios;
                        cout << "¿Cuál es su número telefónico?" << endl;
                        cin >> celular;
                        total[i] = new Limpieza(nombre, edad, actividades, salario, salones, celular, estudios);
                        personalLimpieza[i] = new Limpieza(nombre, edad, actividades, salario, salones, celular, estudios);
                        cout << "Ingrese 1 para añadir un nuevo profesor a la lista de limpieza, y a la lista general de la universidad o 0 para salir y acceder a otro grupo" << endl;
                        cin >> registrarLimpieza;
                    }
                }
            }
        cout << "La persona que va a registrar, ¿A que grupo pertenece?" << endl;
        cout << "1 para Alumno, 2 para profesor y 3 para otros" << endl;
        cin >> confirmacion;
        }
    }
};
#endif /* Universidad_h */
