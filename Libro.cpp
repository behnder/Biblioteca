#include "Libro.h"

Libro::Libro(string nombre, string ISBN, string autor)
{
	this->nombre = nombre;
	this->ISBN = ISBN;
	this->autor = autor;
}

Libro::~Libro()
{
}

void Libro::AgregarEjemplar(int nroEdicion, string ubicacion)
{
	auto ejemplar = make_shared<Ejemplar>(this, nroEdicion, ubicacion);
	ejemplares.push_back(ejemplar);
}

bool Libro::ConsultarDisponibilidad()
{
	return  !ejemplares.empty();
}

void Libro::DevolverEjemplar(shared_ptr<Ejemplar> ejemplar)
{
	ejemplares.push_back(ejemplar);

}


list<shared_ptr<Ejemplar>> Libro::GetEjemplares()

{
	return ejemplares;
}

shared_ptr<Ejemplar> Libro::DescontarEjemplar()
{

	if (ConsultarDisponibilidad()) {
		shared_ptr<Ejemplar> ejemplar = ejemplares.back();
		ejemplares.pop_back();

		return ejemplar;
	}
	return nullptr;

}
