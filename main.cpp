//
// Created by Rafa Cerdas on 8/14/20.
//

#include <iostream>
#include "persona.h"
#include "estudiante.h"
#include "profesor.h"
#include "administrativo.h"

// recordar agregar las clases que se van a llamar en el main(grupo, universidad, menu)
int main()
{


    Estudiante e1(1234,"rafa");
    Profesor p1 (12345,"juan",230500);
    Administrativo a1(123456,"Claudia",340400);

    std::cout<<"hola mundo"<<std::endl;
    cout<<"los datos del estudiante seran mostrados acontinuacion"<<endl;
    cout<<e1.toString()<<endl;
    cout<<"los datos del Profesor seran mostrados acontinuacion"<<endl;
    cout<<p1.toString()<<endl;
    cout<<"los datos del Funcionario seran mostrados acontinuacion"<<endl;
    cout<<a1.toString()<<endl;

    // este main es solo para mostrar que el programa guarda y imprime los datos corretamente. se cambia por menu.

    return 0;
};