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

/*
 * Inicializo la función de mostrar, para mostrar los atributos del alumno, y los de la clase abstracta.
 */
void Alumno::mostrar(){
    cout << "Su nombre es: " << getNombre() << endl;
    cout << "Su edad es: " << getEdad() << endl;
    cout << "La carrera que está estudiando es: " << carrera << endl;
    cout << "Lleva un promedio de la carrera de: " << promedio << endl;
    cout << "Actualmente cursa: " << nivelEstudio << " semestre " << endl;
}

/*
 * Defino mi clase Profesor, como clase hija se Persona.
 */
class Profesor : public Persona{
private:
    string materia;
    float salario;
    int grupos;
    string especialidad;
    string celular;
public:
    /*
     * Inicio el constructor de la clase.
     */
    Profesor(string nombre, int edad, string materia, float salario, int grupos, string especialidad, string celular):Persona(nombre, edad){
        this -> materia = materia;
        this -> salario = salario;
        this -> grupos = grupos;
        this -> especialidad = especialidad;
        this -> celular = celular;
    }
    /*
     * La función getMateria, nos regresa la materia que imparte el profesor.
     * @return materia Materia impartida por el profesor.
     */
    string getMateria(){
        return this -> materia;
    }
    /*
     * La función getSalario, nos regresa el salario del profesor.
     * @return salario Salario del profesor.
     */
    float getSalario(){
        return this -> salario;
    }
    /*
     * La función getGrupos, nos regresa el número de grupos que imparte clases el profesor.
     * @return grupos Grupos que se encarga de dar clase el profesor.
     */
    int getGrupos(){
        return this -> grupos;
    }
    /*
     * La función getEspecialidad, nos regresa la especialidad profesional que tiene el profesor.
     * @return especialidad Especialidad profesional del profesor.
     */
    string getEspecialidad(){
        return this -> especialidad;
    }
    /*
     * La función getCelular, nos regresa el número telefónico del profesor.
     * @return celular Número telefónico del profesor.
     */
    string getCelular(){
        return this -> celular;
    }
    /*
     * La función setMateria, nos ayuda a asignar la materia que imparte el profesor.
     * @param materia Materia que imparte el profesor.
     */
    void setMateria(string _materia){
        this -> materia = _materia;
    }
    /*
     * La función setSalario, nos ayuda a asignar el salario del profesor.
     * @param salario Salario del profesor.
     */
    void setSalario(float _salario){
        this -> salario = _salario;
    }
    /*
     * La función setGrupos, nos ayuda a asignar el número de grupos que imparte clases el profesor.
     * @param grupos Grupos que se encarga de dar clase el profesor.
     */
    void setGrupos(int _grupos){
        this -> grupos = _grupos;
    }
    /*
     * La función setEspecialidad, nos ayuda a asignar la especialidad profesional que tiene el profesor.
     * @param especialidad Especialidad profesional del profesor.
     */
    void setEspecialidad(string _especialidad){
        this -> especialidad = _especialidad;
    }
    /*
     * La función setCelular, nos ayuda a asignar el número celular del profesor.
     * @param celular Número telefónico del profesor.
     */
    void setCelular(string _celular){
        this -> celular = _celular;
    }
    void mostrar();
};
/*
 * Inicializo la función de mostrar, para mostrar los atributos del profesor,
 * y los de la clase abstracta.
 */
void Profesor::mostrar(){
    cout << "Su nombre es: " << getNombre() << endl;
    cout << "Su edad es: " << getEdad() << endl;
    cout << "La materia que imparte es: " << materia << endl;
    cout << "Su salario es: " << salario << endl;
    cout << "Es encargado de:" << grupos << " grupos " << endl;
    cout << "Tiene una especialidad en: " << especialidad << endl;
    cout << "Su número de celular es: " << celular << endl;
}
/*
 * Defino mi clase Limpieza, como clase hija se Persona.
 */
class Limpieza : public Persona{
private:
    string actividades;
    float salario;
    int salones;
    string celular;
    string estudios;
public:
    /*
     * Inicio el constructor de la clase.
     */
    Limpieza(string nombre, int edad, string actividades, float salario, int salones,
             string estudios, string celular):Persona(nombre, edad){
        this -> actividades = actividades;
        this -> salario = salario;
        this -> salones = salones;
        this -> estudios = estudios;
        this -> celular = celular;
    }
    /*
     * La función getActividades, nos regresa las actividades que se encarga de realizar
     * el encargado de limpieza.
     * @return actividades Actividades que se encarga de realizar el encargado de limpieza.
     */
    string getActividades(){
        return this -> actividades;
    }
    /*
     * La función getSalario, nos regresa el salario del personal de limpieza.
     * @return salario Salario del personal de limpieza.
     */
    float getSalario(){
        return this -> salario;
    }
    /*
     * La función getSalones, nos regresa el número de salones que se encarga de limpiar.
     * @return salones Número de salones que se encarga de limpiar.
     */
    int getSalones(){
        return this -> salones;
    }
    /*
     * La función getEstudios, nos regresa el nivel de estudios que tienen los encargados.
     * @return estudios Nivel de estudios que tienen los encargados.
     */
    string getEstudios(){
        return this -> estudios;
    }
    /*
     * La función getCelular, nos regresa el número telefónico del personal de limpieza.
     * @return celular Número telefónico del personal de limpieza.
     */
    string getCelular(){
        return this -> celular;
    }
    /*
     * La función setActividades, nos ayuda a asignar las actividades que se encarga de realizar
     * el encargado de limpieza.
     * @param actividades Actividades que se encarga de realizar.
     */
    void setActividades(string _actividades){
        this -> actividades = _actividades;
    }
    /*
     * La función setSalario, nos ayuda a asignar el salario del personal de limpieza.
     * @param salario Salario del personal de limpieza.
     */
    void setSalario(float _salario){
        this -> salario = _salario;
    }
    /*
     * La función setSalones, nos ayuda a asignar el número de salones que se encarga de limpiar.
     * @param salones Salones que se encarga de limpiar.
     */
    void setSalones(int _salones){
        this -> salones = _salones;
    }
    /*
     * La función setEstudios, nos ayuda a asignar el nivel de estudios que tiene el encargado.
     * @param estudios Nivel de estudios que tiene el encargado.
     */
    void setEstudios(string _estudios){
        this -> estudios = _estudios;
    }
    /*
     * La función setCelular, nos ayuda a asignar el número celular del personal de limpieza.
     * @param celular Número telefónico del personal de limpieza.
     */
    void setCelular(string _celular){
        this -> celular = _celular;
    }
    void mostrar();
};
/*
 * Inicializo la función de mostrar, para mostrar los atributos del personal de limpieza,
 * y los de la clase abstracta.
 */
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
