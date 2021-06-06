//
//  Persona.h
//  School management
//
//  Created by Ramon Mtz on 12/05/21.
//

#ifndef Persona_h
#define Persona_h
#include <iostream>
using namespace std;
/*
 * Defino mi clase Persona, como clase abstracta, ya que de ella se derivan
 * los 3 tipos de persons que conforman a la escuela.
 */
class Persona{
private:
    string nombre;
    int edad;
public:
    /*
     * Inicio el constructor de la clase abstracta.
     */
    Persona(string nombre, int edad){
        this -> edad = edad;
        this -> nombre = nombre;
    }
    virtual void mostrar() = 0;
    /*
     * Declaramos los getters y setters como protegidos, ya que la clase Persona es abstracta
     */
protected:
    /*
     * La función getNombre, nos regresa el nombre de la persona.
     * @return nombre Nombre de la persona.
     */
    string getNombre(){
        return this -> nombre;
    }
    /*
     * La función getEdad, nos regresa la edad de la persona.
     * @return edad Edad de la persona.
     */
    int getEdad(){
        return this -> edad;
    }
    /*
     * La función setNombre, nos ayuda a asignar el nombre de la persona.
     * @param nombre Nombre de la persona a registrar.
     */
    void setNombre(string _nombre){
        this -> nombre = _nombre;
    }
    /*
     * La función setEdad, nos ayuda a asignar la edad de la persona.
     * @param edad Edad de la persona a registrar.
     */
    void setEdad(int _edad){
        this -> edad = _edad;
    }
};

/*
 * Defino mi clase Alumno, como clase hija se Persona.
 */
class Alumno : public Persona{
private:
    string carrera;
    float promedio;
    string nivelEstudio;
public:
    /*
     * Inicio el constructor de la clase.
     */
    Alumno(string nombre, int edad, string carrera, float promedio, string nivelEstudio):Persona(nombre, edad){
        this -> carrera = carrera;
        this -> promedio = promedio;
        this -> nivelEstudio = nivelEstudio;
    }
    /*
     * La función getCarrera, nos regresa la carrera que está cursando el alumno o alumna.
     * @return carrera Carrera que cursa el o alumno o alumna.
     */
    string getCarrera(){
        return this -> carrera;
    }
    /*
     * La función getPromedio, nos regresa el promedio acumulado del alumno o alumna en la carrera.
     * @return promedio Promedio total acumulado en la carrera.
     */
    float getPromedio(){
        return this -> promedio;
    }
    /*
     * La función getNivelEstudio, nos regresa el semestre que está cursando el alumno o alumna.
     * @return nivelEstudio Semestre que cursa el o alumno o alumna.
     */
    string getNivelEstudio(){
        return this -> nivelEstudio;
    }
    /*
     * La función setCarrera, nos ayuda a asignar la carrera que están cursando.
     * @param carrera Carrera universitaria que están cursando.
     */
    void setCarrera(string _carrera){
        this -> carrera = _carrera;
    }
    /*
     * La función setPromedio, nos ayuda a asignar el promedio del estudiante.
     * @param promedio Promedio general acumulado en la carrera.
     */
    void setPromedio(float _promedio){
        this -> promedio = _promedio;
    }
    /*
     * La función setNivelEstudio, nos ayuda a asignar el semestre que está cursando el estudiante.
     * @param nivelEstudio Semestre que está cursando el estudiante.
     */
    void setNivelEstudio(string _nivelEstudio){
        this -> nivelEstudio = _nivelEstudio;
    }
    void mostrar();
};

void Alumno::mostrar(){
    cout << "Su nombre es: " << getNombre() << endl;
    cout << "Su edad es: " << getEdad() << endl;
    cout << "La carrera que está estudiando es: " << carrera << endl;
    cout << "Lleva un promedio de la carrera de: " << promedio << endl;
    cout << "Actualmente cursa: " << nivelEstudio << " semestre " << endl;
}

class Profesor : public Persona{
private:
    string materia;
    float salario;
    int grupos;
    string especialidad;
    string celular;
public:
    Profesor(string nombre, int edad, string materia, float salario, int grupos, string especialidad, string celular):Persona(nombre, edad){
        this -> materia = materia;
        this -> salario = salario;
        this -> grupos = grupos;
        this -> especialidad = especialidad;
        this -> celular = celular;
    }
    string getMateria(){
        return this -> materia;
    }
    float getSalario(){
        return this -> salario;
    }
    int getGrupos(){
        return this -> grupos;
    }
    string getEspecialidad(){
        return this -> especialidad;
    }
    string getCelular(){
        return this -> celular;
    }
    void setMateria(string _materia){
        this -> materia = _materia;
    }
    void setSalario(float _salario){
        this -> salario = _salario;
    }
    void setGrupos(int _grupos){
        this -> grupos = _grupos;
    }
    void setEspecialidad(string _especialidad){
        this -> especialidad = _especialidad;
    }
    void setCelular(string _celular){
        this -> celular = _celular;
    }
    void mostrar();
};

void Profesor::mostrar(){
    cout << "Su nombre es: " << getNombre() << endl;
    cout << "Su edad es: " << getEdad() << endl;
    cout << "La materia que imparte es: " << materia << endl;
    cout << "Su salario es: " << salario << endl;
    cout << "Es encargado de:" << grupos << " grupos " << endl;
    cout << "Tiene una especialidad en: " << especialidad << endl;
    cout << "Su número de celular es: " << celular << endl;
}

class Limpieza : public Persona{
private:
    string actividades;
    float salario;
    int salones;
    string celular;
    string estudios;
public:
    Limpieza(string nombre, int edad, string actividades, float salario, int salones,
             string estudios, string celular):Persona(nombre, edad){
        this -> actividades = actividades;
        this -> salario = salario;
        this -> salones = salones;
        this -> estudios = estudios;
        this -> celular = celular;
    }
    string getActividades(){
        return this -> actividades;
    }
    float getSalario(){
        return this -> salario;
    }
    int getSalones(){
        return this -> salones;
    }
    string getEstudios(){
        return this -> estudios;
    }
    string getCelular(){
        return this -> celular;
    }
    void setActividades(string _actividades){
        this -> actividades = _actividades;
    }
    void setSalario(float _salario){
        this -> salario = _salario;
    }
    void setSalones(int _salones){
        this -> salones = _salones;
    }
    void setEstudios(string _estudios){
        this -> estudios = _estudios;
    }
    void setCelular(string _celular){
        this -> celular = _celular;
    }
    void mostrar();
};

void Limpieza::mostrar(){
    cout << "Su nombre es: " << getNombre() << endl;
    cout << "Su edad es: " << getEdad() << endl;
    cout << "Las actividades que realiza son: " << actividades << endl;
    cout << "Su salario es: " << salario << endl;
    cout << "Es encargado de limpiar:" << salones << " salones por dia " << endl;
    cout << "Tiene estudios en: " << estudios << endl;
    cout << "Su número de celular es: " << celular << endl;
}
#endif /* Persona_h */
