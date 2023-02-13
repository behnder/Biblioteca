#pragma once
#include <string>
#include <list>
#include <memory>
#include "Ejemplar.h"


using namespace std;

class Libro
{
private:
	string nombre;
	string ISBN;
	string autor;
	list<shared_ptr<Ejemplar>>  ejemplares;
public:
	Libro(string nombre, string ISBN, string autor);
	Libro();
	~Libro();
	void AgregarEjemplar(int nroEdicion, string ubicacion);
	bool ConsultarDisponibilidad();
	void DevolverEjemplar(shared_ptr<Ejemplar> ejemplar);
	list<shared_ptr<Ejemplar>> GetEjemplares();
	shared_ptr<Ejemplar> DescontarEjemplar();


};

