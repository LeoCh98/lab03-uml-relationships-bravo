//
// Created by Rafa Cerdas on 8/15/20.
//

#ifndef LAB03_UML_RELATIONSHIPS_BRAVO_ESTUDIANTE_H
#define LAB03_UML_RELATIONSHIPS_BRAVO_ESTUDIANTE_H

#include <string>
#include <sstream>
#include <iostream>
#include "persona.h"

using namespace std;
class Estudiante:public Persona {

private:
    //Grupo* grupo; //variable del grupo tambien se debe agregar al constructor.
public:
    Estudiante(int id, const string &nombre);
    //void asignarGrupo(Grupo*);
    virtual string toString() override ;
    ~Estudiante();
};


#endif //LAB03_UML_RELATIONSHIPS_BRAVO_ESTUDIANTE_H
