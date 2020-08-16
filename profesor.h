//
// Created by Rafa Cerdas on 8/15/20.
//

#ifndef LAB03_UML_RELATIONSHIPS_BRAVO_PROFESOR_H
#define LAB03_UML_RELATIONSHIPS_BRAVO_PROFESOR_H
#include <string>
#include <sstream>
#include <iostream>
#include "persona.h"
using namespace std;

class Profesor: public Persona {

private:
    double salario;
    //Grupo grupo; // la variable de grupo para cuando se implemente la clase. tambien agregar al constructor
public:


    Profesor(int id, const string &nombre, double salario);

    void setSalario(double salario);

    double getSalario() const;

    virtual string toString() override;

    ~Profesor();

};


#endif //LAB03_UML_RELATIONSHIPS_BRAVO_PROFESOR_H
