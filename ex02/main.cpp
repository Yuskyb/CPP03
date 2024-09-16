#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "--- ClapTrap Test ---\n" << std::endl;

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

    std::cout << "\n--- FragTrap Test ---\n" << std::endl;

    // FragTrapオブジェクトの生成
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
