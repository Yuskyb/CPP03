#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    // ClapTrapオブジェクトの生成
    ClapTrap claptrap1("ClapTrap1");
    ClapTrap claptrap2("ClapTrap2");

    std::cout << std::endl;

    // ClapTrap1がClapTrap2を攻撃
    claptrap1.attack("ClapTrap2");

    // ClapTrap2が5ポイントのダメージを受ける
    claptrap2.takeDamage(5);

    std::cout << std::endl;

    // ClapTrap2が5ポイント回復
    claptrap2.beRepaired(5);

    std::cout << std::endl;

    // ClapTrap2が10ポイントのダメージを受けて倒される
    claptrap2.takeDamage(10);

    std::cout << "\n--- ScavTrap Test ---\n" << std::endl;

    // ScavTrapオブジェクトの生成
    ScavTrap scavtrap1("ScavTrap1");
    ScavTrap scavtrap2("ScavTrap2");

    std::cout << std::endl;

    // ScavTrap1がScavTrap2を攻撃
    scavtrap1.attack("ScavTrap2");

    // ScavTrap2が20ポイントのダメージを受ける
    scavtrap2.takeDamage(20);

    std::cout << std::endl;

    // ScavTrap2が10ポイント回復
    scavtrap2.beRepaired(10);

    std::cout << std::endl;

    // ScavTrap2が50ポイントのダメージを受ける
    scavtrap2.takeDamage(50);

    std::cout << std::endl;

    // ScavTrap2がゲートキーパーモードに入る
    scavtrap2.guardGate();

    return 0;
}
