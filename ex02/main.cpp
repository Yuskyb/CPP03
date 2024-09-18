#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap fragtrap1("FragTrap1");
    FragTrap fragtrap2("FragTrap2");

    std::cout << std::endl;

    // FragTrap1がFragTrap2を攻撃
    fragtrap1.attack("FragTrap2");

    // FragTrap2が30ポイントのダメージを受ける
    fragtrap2.takeDamage(30);

    std::cout << std::endl;

    // FragTrap2が20ポイント回復
    fragtrap2.beRepaired(20);

    std::cout << std::endl;

    // FragTrap2が50ポイントのダメージを受ける
    fragtrap2.takeDamage(50);

    std::cout << std::endl;

    // FragTrapがハイタッチをリクエスト
    fragtrap1.highFivesGuys();

    return 0;
}
