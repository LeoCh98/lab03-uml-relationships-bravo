//
// Created by leoch on 17/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_BRAVO_GRUPO_H
#define LAB03_UML_RELATIONSHIPS_BRAVO_GRUPO_H


#include <list>
#include "estudiante.h"
#include "profesor.h"
#include <sstream>

class Grupo {
private:
    list<Estudiante*> estudiantes;
    Profesor* profesor;
    int numero;

public:
    Grupo();
    Grupo(int);
    ~Grupo();
    void setNumero(int);
    int getNumero();
    void asignarEstudiante(Estudiante*);
    void asignarProfesor(Profesor*);
    string toString();
};


#endif //LAB03_UML_RELATIONSHIPS_BRAVO_GRUPO_H
