//
// Created by Rafa Cerdas on 8/15/20.
//

#include "persona.h"

Persona::Persona(int id, const string &nombre) : id(id), Nombre(nombre) {}

void Persona::setId(int id) {
    Persona::id = id;
}

void Persona::setNombre(const string &nombre) {
    Nombre = nombre;
}

int Persona::getId() const {
    return id;
}

const string &Persona::getNombre() const {
    return Nombre;
}

string Persona::toString() {
    stringstream s;
    s<<"El Nombre es: "<<getNombre()<<endl;
    s<<"El ID es: "<<getId()<<endl;
    return s.str();
}

Persona::~Persona() {

}




