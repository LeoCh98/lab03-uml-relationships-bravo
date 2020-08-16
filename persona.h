//
// Created by Rafa Cerdas on 8/15/20.
//

#ifndef LAB03_UML_RELATIONSHIPS_BRAVO_PERSONA_H
#define LAB03_UML_RELATIONSHIPS_BRAVO_PERSONA_H

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Persona {
private:
    int id; // sigo insistiendo que sea string.
    string Nombre;
public:
    Persona(int id, const string &nombre);

    void setId(int id);

    void setNombre(const string &nombre);

    int getId() const;

    const string &getNombre() const;

    virtual string toString()=0;

    virtual ~Persona();


};


#endif //LAB03_UML_RELATIONSHIPS_BRAVO_PERSONA_H
