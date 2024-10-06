#include "FragTrap.hpp"

int main()
{
    FragTrap frag1;
    FragTrap frag2("frag2");
    FragTrap frag3(frag2);
    frag1 = frag3;

    frag1.attack("frag2");
    frag2.takeDamage(frag1.getAttackPower());
    frag2.beRepaired(1);
    frag3.highFivesGuys();
}