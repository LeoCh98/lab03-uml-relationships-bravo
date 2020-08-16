//
// Created by Rafa Cerdas on 8/15/20.
//

#ifndef LAB03_UML_RELATIONSHIPS_BRAVO_ADMINISTRATIVO_H
#define LAB03_UML_RELATIONSHIPS_BRAVO_ADMINISTRATIVO_H

#include <string>
#include <sstream>
#include <iostream>
#include "persona.h"
using namespace std;
class Administrativo: public Persona {
private:
    double salario;
public:
    Administrativo(int id, const string &nombre, double salario);
    void setSalario(double salario);
    double getSalario() const;
    string toString() override;
    ~Administrativo();

};


#endif //LAB03_UML_RELATIONSHIPS_BRAVO_ADMINISTRATIVO_H
