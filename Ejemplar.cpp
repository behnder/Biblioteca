#include "Ejemplar.h"

Ejemplar::Ejemplar(Libro* libro, int nroEdicion, string ubicacion)
{
	this->libro = shared_ptr<Libro>(libro);;
	this->nroEdicion = nroEdicion;
	this->ubicacionEnBiblioteca = ubicacion;
}
