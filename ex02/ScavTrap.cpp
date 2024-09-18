#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", 100, 50, 20)
{
	std::cout << _name << "が生成されました。" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap: " << _name << "が生成されました。" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << _name << "が生成されました。(コピー)" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(static_cast<ClapTrap>(other));
	}
	return (*this);
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