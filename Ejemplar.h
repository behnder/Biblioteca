#pragma once
#include "Libro.h"
#include <memory>

using namespace std;

class Ejemplar
{
private:

	shared_ptr<Libro> libro;
	int nroEdicion;
	string ubicacionEnBiblioteca;
public:
	Ejemplar(Libro *libro, int nroEdicion, string ubicacion);
};

