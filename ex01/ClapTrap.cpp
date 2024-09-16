#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_power = 0;
	std::cout << "ClapTrap: " << _name << "が生成されました。" << std::endl;
	return ;
}


void	ClapTrap::attack(const std::string& target)
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
	std::cout << _name << ": " << target << "に攻撃します。" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << ": " << amount << "ダメージを受けました。" << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << _name << ": ヒットポイントが0になりました。" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << _name << ": " << amount << "回復しました。" << std::endl;
	if (amount >= 2147483647)
		this->_hitpoints += 2147483647;
	else
		this->_hitpoints += amount;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: " << _name << "が破壊されました。" << std::endl;
	return ;
}