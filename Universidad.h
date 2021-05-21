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
    string direccion;
    string numero;
    int capacidad;
    string ciudad;
    string pais;
    
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
        int confirmacion;
        cout << "¿A qué grupo quiere acceder para hacer un registro?" << endl;
        cout << "1 para Alumnos, 2 para Profesores y 3 para Personal de Limpieza o 4 para terminar el registro" << endl;
        cin >> confirmacion;
        while (confirmacion != 4){
            if (confirmacion == 1){
                int registroAlumno;
                int confirmacionImpresion;
                cout << "¿Cuántos Alumnos desea registrar?" << endl;
                cin >> registroAlumno;
                Persona *Alumnos[registroAlumno];
                for (int i=0;i<registroAlumno;i++){
                    string nombre;
                    int edad;
                    string carrera;
                    float promedio;
                    string nivelEstudio;
                    cout << "¿Cuál es el nombre del estudiante?" << endl;
                    cin >> nombre;
                    cout << "¿Cuál es su edad?" << endl;
                    cin >> edad;
                    cout << "¿Qué carrera está estudiando?" << endl;
                    cin >> carrera;
                    cout << "¿Qué promedio lleva acumulado en toda la carrera?" << endl;
                    cin >> promedio;
                    cout << "¿En qué semestre está actualmente?" << endl;
                    cin.ignore();
                    getline(cin, nivelEstudio);
                    Alumnos[i] = new Alumno(nombre, edad, carrera, promedio, nivelEstudio);
                }
                    cout << "¿Desea imprimir la lista de los Estudiantes?, Ingrese 1 para si, o 0 para no hacerlo" << endl;
                    cin >> confirmacionImpresion;
                    if (confirmacionImpresion == 1){
                        for (int i = 0; i<registroAlumno;i++){
                            Alumnos[i]->mostrar();
                            cout << "\n" << endl;
                                        }
                    }else{
                        cout << "Cancelando impresión del personal" << endl;
                        }
                cout << "¿A qué grupo quiere acceder para hacer un registro?" << endl;
                cout << "1 para Alumnos, 2 para Profesores y 3 para Personal de Limpieza o 4 para terminar el registro" << endl;
                cin >> confirmacion;
                }
            else if (confirmacion == 2){
                int registrarProfesor;
                int confirmacionImpresion;
                cout << "¿Cuántos profesores desea registrar?" << endl;
                cin >> registrarProfesor;
                Persona *Profesores[registrarProfesor];
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
                    Profesores[i] = new Profesor(nombre, edad, materia, salario, grupos, especialidad, celular);
                }
                    cout << "¿Desea imprimir la lista solo de los Profesores?, Ingrese 1 para si, o 0 para no hacerlo" << endl;
                    cin >> confirmacionImpresion;
                    if (confirmacionImpresion == 1){
                        for (int i = 0; i<registrarProfesor;i++){
                            Profesores[i]->mostrar();
                            cout << "\n" << endl;
                                            }
                    }else{
                        cout << "Cancelando impresión del personal" << endl;
                    }
                cout << "¿A qué grupo quiere acceder para hacer un registro?" << endl;
                cout << "1 para Alumnos, 2 para Profesores y 3 para Personal de Limpieza o 4 para terminar el registro" << endl;
                cin >> confirmacion;
                }
            else if (confirmacion == 3){
                int registrarLimpieza;
                int confirmacionImpresion;
                cout << "¿Cuánto personal de Limpieza desea registrar?" << endl;
                cin >> registrarLimpieza;
                Persona *personalLimpieza[registrarLimpieza];
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
                    cin.ignore();
                    getline(cin, actividades);
                    cout << "¿Cuál es su salario?" << endl;
                    cin >> salario;
                    cout << "¿Cuántos salones se encarga de limpiar?" << endl;
                    cin >> salones;
                    cout << "¿Qué nivel de estudios tiene? (Secundaria, Preparatoria, etc)" << endl;
                    cin >> estudios;
                    cout << "¿Cuál es su número telefónico?" << endl;
                    cin >> celular;
                    personalLimpieza[i] = new Limpieza(nombre, edad, actividades, salario, salones, celular, estudios);
                }
                    cout << "¿Desea imprimir la lista solo de los empleados del área de limpieza?, Ingrese 1 para si, o 0 para no hacerlo" << endl;
                    cin >> confirmacionImpresion;
                    if (confirmacionImpresion == 1){
                        for (int i = 0; i<registrarLimpieza;i++){
                            personalLimpieza[i]->mostrar();
                            cout << "\n" << endl;
                                    }
                    }else{
                            cout << "Cancelando impresión del personal" << endl;
                                }
                            }
                        }
    }
};
#endif /* Universidad_h */
