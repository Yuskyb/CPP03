#include "ClapTrap.hpp"

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

    return 0;
}
