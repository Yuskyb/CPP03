#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1;
    ClapTrap clap2("clap2");
    ClapTrap clap3(clap2);
    clap1 = clap3;

    clap1.attack("clap2");
    clap2.takeDamage(clap1.get_attack());
    clap2.beRepaired(1);
}