//
//  Universidad.h
//  School management
//
//  Created by Ramon Mtz on 19/05/21.
//

#ifndef Universidad_h
#define Universidad_h
#include <iostream>
#include "Persona.h" 

using namespace std;
/*
* Defino mi clase Universidad, que obtiene los datos generales de la escuela, y hace el llenado del registro por medio de apuntadores.
*/
class Universidad{
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
    /*
     * Inicio el constructor de la clase.
     */
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
    /*
     * La función getNombre, nos regresa el nombre de la escuela.
     * @return nombre Nombre de la escuela.
     */
    string getNombre(){
        return this -> nombre;
    }
    /*
     * La función getDireccion, nos regresa la dirección de la escuela.
     * @return direccion Dirección de la escuela.
     */
    string getDireccion(){
        return this -> direccion;
    }
    /*
     * La función getNumero, nos regresa el número exterior de la escuela.
     * @return numero Numero exterior de la escuela.
     */
    string getNumero(){
        return this -> numero;
    }
    /*
     * La función getCapacidad, nos regresa la capacidad máxima de la escuela.
     * @return capacidad Capacidad máxima de la escuela.
     */
    int getCapacidad(){
        return this -> capacidad;
    }
    /*
     * La función getCiudad, nos regresa la ciudad donde se ubica la escuela.
     * @return ciudad Ciudad donde se ubica la escuela.
     */
    string getCiudad(){
        return this -> ciudad;
    }
    /*
     * La función getEstado, nos regresa el estado donde se ubica la escuela.
     * @return estado Estado donde se ubica la escuela.
     */
    string getEstado(){
        return this -> estado;
    }
    /*
     * La función getPais, nos regresa el país donde se ubica la escuela.
     * @return pais País donde se ubica la escuela.
     */
    string getPais(){
        return this -> pais;
    }
    /*
     * La función getCodigoPostal, nos regresa el código postal de la escuela.
     * @return postalCode Código postal de la escuela.
     */
    int getcodigoPostal(){
        return this -> postalCode;
    }
    /*
     * La función setNombre, nos ayuda a asignar el nombre de la escuela.
     *@param nombre Nombre de la escuela.
     */
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    /*
     * La función setDireccion, nos ayuda a asignar la dirección de donde se ubica la escuela.
     *@param direccion Dirección de donde se ubica la escuela.
     */
    void setDireccion(string _direccion){
        this -> direccion = _direccion;
    }
    /*
     * La función setNumero, nos ayuda a asignar el número exterior de la escuela.
     *@param numero Número exterior de donde se ubica la escuela.
     */
    void setNumero(string _numero){
        this -> numero = _numero;
    }
    /*
     * La función setCapacidad, nos ayuda a asignar la capacidad máxica de la escuela.
     *@param capacidad Capacidad máxima de la escuela.
     */
    void setCapacidad(int _capacidad){
        this -> capacidad = _capacidad;
    }
    /*
     * La función setCiudad, nos ayuda a asignar la ciudad donde se ubica la escuela.
     *@param ciudad Ciudad donde se ubica la escuela.
     */
    void setCiudad(string _ciudad){
        this -> ciudad = _ciudad;
    }
    /*
     * La función setEstado, nos ayuda a asignar el estado donde se ubica la escuela.
     *@param estado Estado donde se ubica la escuela.
     */
    void setEstado(string _estado){
        this -> estado = _estado;
    }
    /*
     * La función setPais, nos ayuda a asignar el país donde se ubica la escuela.
     *@param pais País donde se ubica la escuela.
     */
    void setPais(string _pais){
        this -> pais = _pais;
    }
    /*
     * La función setCP, nos ayuda a asignar el código postal de la escuela.
     *@param postalCode Código postal de la escuela.
     */
    void setCP(int _postalCode){
        this -> postalCode = _postalCode;
    }
    /*
     * La llenarDatosEscuela, nos ayuda a los input de los valores,
     * para después ser asignados a los setters de la escuela, e imprimir sus datos.
     */
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
    /*
     * La función imprimirDatosEscuela, nos ayuda a imprimir los valores que fueron ingresados
     * anteriormente, como el nombre, dirección, número telefónico, ciuidad, país, etc.
     */
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
    
    /*
     * La función llenarDatosRegistro, sirve para hacer el registro de personal en la escuela, como alumnos, profesores y personal de limpieza, por medio de apuntadores.
     */
    void llenarDatosRegistro(){
        int registrar;
        int confirmacion;
        cout<<"¿Cuántas personas quiere registrar?"<<endl;
        cin>>registrar;
        Persona *Capacidad[registrar];
        for (int i=0;i<registrar;i++){
            cout << "¿A qué grupo quiere acceder para hacer un registro?" << endl;
            cout << "1 para Alumnos, 2 para Profesores y 3 para Personal de Limpieza" << endl;
            cin >> confirmacion;
            if (confirmacion == 1){
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
                Capacidad[i] = new Alumno(nombre, edad, carrera, promedio, nivelEstudio);
                }
            else if (confirmacion == 2){
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
                Capacidad[i] = new Profesor(nombre, edad, materia, salario, grupos, especialidad, celular);
                }
            else if (confirmacion == 3){
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
                cin.ignore();
                getline(cin,celular);
                Capacidad[i] = new Limpieza(nombre, edad, actividades, salario, salones, celular, estudios);
                            }
                        }
            for (int i = 0; i<registrar;i++){
                Capacidad[i]->mostrar();
                cout << "\n" << endl;
                        }
        
    }
};
#endif /* Universidad_h */
