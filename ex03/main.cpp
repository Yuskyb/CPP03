#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    DiamondTrap dt("Diamond");
    dt.whoAmI();  // DiamondTrapの名前とClapTrapの名前を表示

    return 0;
}
