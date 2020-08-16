//
// Created by Rafa Cerdas on 8/15/20.
//

#include "profesor.h"


Profesor::Profesor(int id, const string &nombre, double salario) : Persona(id, nombre), salario(salario) {}




void Profesor::setSalario(double salario) {
    Profesor::salario = salario;
}

double Profesor::getSalario() const {
    return salario;
}
string Profesor::toString() {
    stringstream s;
    s<<Persona::toString();
    cout<<"El salario del profesor es:"<<getSalario()<<endl;
    s<<"El Grupo es: "<<"grupo"<<endl; // aqui solo se agrega a la variable de tipo grupo

    return s.str();
}

Profesor::~Profesor() {

}
