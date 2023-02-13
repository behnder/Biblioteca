#include "Socio.h"

int Socio::id = 0;

using namespace std;

Socio::Socio(string nombre, string apellido)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->id = id++;

}

 bool Socio::PuedeRetirarLibros()
{
	int a = ejemplares.size();
	if (a >= 1)
		return false;
	return true;
}

void Socio::PedirEjemplar(Libro *libro)
{
	if (PuedeRetirarLibros() && libro->ConsultarDisponibilidad())
	{
		this->ejemplares.push_back(libro->DescontarEjemplar());

	}
}

void Socio::DevolverEjemplar(Libro *libro)
{
	auto ejemplar = this->ejemplares.back();
	ejemplares.pop_back();
	libro->DevolverEjemplar(ejemplar);
	
}

list<shared_ptr<Ejemplar>> Socio::GetEjemplares()
{
	return ejemplares;
}
