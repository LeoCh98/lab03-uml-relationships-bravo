//
// Created by Rafa Cerdas on 8/15/20.
//

#include "administrativo.h"

Administrativo::Administrativo(int id, const string &nombre, double salario) : Persona(id, nombre), salario(salario) {}



void Administrativo::setSalario(double salario) {
    Administrativo::salario = salario;
}

double Administrativo::getSalario() const {
    return salario;
}

string Administrativo::toString() {
    stringstream s;
    s<<Persona::toString();
    cout<<"El salario del funcionario es:"<<getSalario()<<endl;

    return s.str();
}
Administrativo::~Administrativo() {}