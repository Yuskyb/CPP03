#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_power = 30;
	std::cout << "FragTrap: " << _name << "が生成されました。" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "ハイタッチしよう！！" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: " << _name << "が破壊されました。" << std::endl;
	return ;
}