#include "SocioVip.h"
#include "Socio.h"


SocioVip::SocioVip(string nombre, string apellido) : Socio(nombre, apellido) {}

SocioVip::~SocioVip() {}

bool SocioVip::PuedeRetirarLibros() 
{
	int a = this->ejemplares.size();
	if (a >= 3)
		return false;
	return true;
}
