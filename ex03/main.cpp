#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dia;
	DiamondTrap	Dia1("Dia1");
	DiamondTrap	Dia2("Dia2");
	DiamondTrap copy(Dia1);

	dia = Dia1;
	copy.attack("Dia");
	copy.whoAmI();
}