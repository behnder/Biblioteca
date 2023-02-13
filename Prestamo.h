#pragma once
#include "Ejemplar.h"
#include "Socio.h"
class Prestamo
{
private:
	Ejemplar ejemplar;
	Socio socio;
	string fechaYHora;
public:
	Prestamo();
	~Prestamo();
};

