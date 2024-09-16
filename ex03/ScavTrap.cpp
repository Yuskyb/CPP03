#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_power = 20;
	std::cout << "ScavTrap: " << _name << "が生成されました。" << std::endl;
	return ;
}


void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitpoints <=0)
	{
		std::cout << "ヒットポイントがありません" << std::endl;
		return ;
	}
	if (this->_energy_points <=0)
	{
		std::cout << "エナジーポイントがありません" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << _name << ": " << target << "に攻撃します。" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: ゲートキーパーモードになりました。" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << _name << "が破壊されました。" << std::endl;
	return ;
}