#include "Persona.hpp"

Persona::Persona(int edad)
{
    // dni y genero se establecen de forma automatica.
    this->edad = edad;
}

void Persona::mostrar() { 
	cout << "La persona tiene " << this->edad <<" anyos" << endl; 
}

Persona::~Persona() {}

