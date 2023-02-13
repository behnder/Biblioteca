#pragma once
#include <string>
#include <list>
#include "Ejemplar.h"

using namespace std;
class Socio
{
public:
	string nombre;
	string apellido;

	static int id;
	list <shared_ptr<Ejemplar>> ejemplares;
	int cantMaximaDeRetiros = 1;

public:
	Socio(string nombre, string apellido);
	~Socio();
	virtual bool  PuedeRetirarLibros();
	void PedirEjemplar(Libro *libro);
	void DevolverEjemplar(Libro *libro);
	list<shared_ptr<Ejemplar>> GetEjemplares();

};

