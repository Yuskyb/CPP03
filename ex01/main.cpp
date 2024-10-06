#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1;
    ScavTrap scav2("scav2");
    ScavTrap scav3(scav2);
    scav1 = scav3;

    scav1.attack("scav2");
    scav2.takeDamage(scav2.getAttackPower());
    scav2.beRepaired(1);
	scav1.guardGate();
}