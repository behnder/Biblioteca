#pragma once
#include <list>
#include "Ejemplar.h"

class SocioVip : public Socio
{
private:
	int valorCuota = 10;
public:
	SocioVip(string nombre, string apellido);
	~SocioVip();
	bool PuedeRetirarLibros() override;
};

