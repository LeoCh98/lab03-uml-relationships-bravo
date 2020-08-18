//
// Created by Rafa Cerdas on 8/15/20.
//

#include "estudiante.h"

Estudiante::Estudiante(int id, const string &nombre) : Persona(id, nombre) {}

Estudiante::~Estudiante() {

}

string Estudiante::toString() {
    stringstream s;
    s<<Persona::toString();
    s<<"El Grupo es: "<< "grupo"<< endl;

    return s.str();
}
