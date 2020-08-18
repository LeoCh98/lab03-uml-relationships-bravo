cmake_minimum_required(VERSION 3.14)
project(lab03-uml-relationships-bravo)

set(CMAKE_CXX_STANDARD 17)
add_executable(sample main.cpp persona.cpp persona.h estudiante.cpp estudiante.h profesor.cpp profesor.h administrativo.cpp administrativo.h universidad.cpp universidad.h menu.cpp menu.h grupo.cpp grupo.h)