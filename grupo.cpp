//
// Created by leoch on 17/8/2020.
//

#include "grupo.h"
Grupo::Grupo(){}

Grupo::Grupo(int num)
: numero(num) { }

Grupo::~Grupo(){}

void Grupo::setNumero(int numero){
    this->numero=numero;
}
int Grupo::getNumero(){
    return numero;
}
void Grupo::asignarEstudiante(Estudiante* estudiante){
    estudiantes.push_back(estudiante);
}
void Grupo::asignarProfesor(Profesor* profesor){
    this->profesor = profesor;
}

string Grupo::toString(){
    stringstream output;
    output<<"Grupo numero: "<<getNumero()<<endl
    <<"Profesor a cargo: "<< profesor->getNombre()<<endl
    <<"Estudiantes a cargo: \n";
    for (auto it = estudiantes.cbegin(); it != estudiantes.cend(); it++)
    {
        output << it.operator*()->toString() << '\n';
    }
    return output.str();
}