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
    string nombre;
    string direccion;
    string numero;
    int capacidad;
    string ciudad;
    string estado;
    string pais;
    int postalCode;
public:
    Universidad(){
        this -> nombre = "";
        this -> direccion = "";
        this -> numero = "";
        this -> capacidad = 0;
        this -> ciudad = "";
        this -> estado = "";
        this -> pais = "";
        this -> postalCode = 0;
    }
    string getNombre(){
        return this -> nombre;
    }
    string getDireccion(){
        return this -> direccion;
    }
    string getNumero(){
        return this -> numero;
    }
    int getCapacidad(){
        return this -> capacidad;
    }
    string getCiudad(){
        return this -> ciudad;
    }
    string getEstado(){
        return this -> estado;
    }
    string getPais(){
        return this -> pais;
    }
    int getcodigoPostal(){
        return this -> postalCode;
    }
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    void setDireccion(string _direccion){
        this -> direccion = _direccion;
    }
    void setNumero(string _numero){
        this -> numero = _numero;
    }
    void setCapacidad(int _capacidad){
        this -> capacidad = _capacidad;
    }
    void setCiudad(string _ciudad){
        this -> ciudad = _ciudad;
    }
    void setEstado(string _estado){
        this -> estado = _estado;
    }
    void setPais(string _pais){
        this -> pais = _pais;
    }
    void setCP(int _postalCode){
        this -> postalCode = _postalCode;
    }
    void llenarDatosEscuela(){
        string nombre;
        string direccion;
        string numero;
        int capacidad;
        string ciudad;
        string estado;
        string pais;
        int postalCode;
        cout << "¿Cuál es el nombre de la escuela?" << endl;
        cin.ignore();
        getline(cin, nombre);
        setNombre(nombre);
        cout << "¿Cuál es la dirección de la escuela?" << endl;
        cin.ignore();
        getline(cin, direccion);
        setDireccion(direccion);
        cout << "¿Cuál es el número exterior?" << endl;
        cin >> numero;
        setNumero(numero);
        cout <<"¿Qué capacidad máxima tiene la institución?" << endl;
        cin >> capacidad;
        setCapacidad(capacidad);
        cout << "¿En qué ciudad se localiza la escuela?" << endl;
        cin.ignore();
        getline(cin, ciudad);
        setCiudad(ciudad);
        cout << "¿En qué estado?" << endl;
        cin.ignore();
        getline(cin, estado);
        setEstado(estado);
        cout << "¿En qué país?" << endl;
        cin.ignore();
        getline(cin, pais);
        setPais(pais);
        cout << "¿Cuál es el código postal?" << endl;
        cin >> postalCode;
        setCP(postalCode);
    }
    void imprimirDatosEscuela(){
        cout << "La escuela se llama: " << getNombre() << endl;
        cout << "Su dirección es: " << getDireccion() << endl;
        cout << "El número exterior es: " << getNumero() << endl;
        cout << "Tiene una capacidad máxima de: " << getCapacidad() << " personas " << endl;
        cout << "Se localiza en la ciudad de: " << getCiudad() << endl;
        cout << "En el estado de: " << getEstado() << endl;
        cout << "En el país: " << getPais() << endl;
        cout << "Con el código postal: " << getcodigoPostal() << endl;
    }
    void llenarDatosRegistro(){
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
