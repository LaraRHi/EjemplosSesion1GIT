#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;

// cntrl + i para adaptar al codigo

class Persona
{
public:
    Persona(int edad);
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    ~Persona();

private:
    int genero; // 1: mujer, 0:hombre
    int edad;
    char dni[10];
};

#endif // PERSONA_HPP
