#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("default"),
	_hitpoints(10),
	_energy_points(10),
	_attack_power(0)
{
	std::cout << _name << "が生成されました。" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
	_name(name),
	_hitpoints(10),
	_energy_points(10),
	_attack_power(0)
{
	std::cout << _name << "が生成されました。" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy_points(other._energy_points),
	_attack_power(other._attack_power)
{
	std::cout << _name << "が生成されました。(コピー)" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energy_points = other._energy_points;
		_attack_power = other._attack_power;
	}
	std::cout << this->_name << "operatorが呼ばれました。" << std::endl;
	return (*this);
}

unsigned int ClapTrap::get_attack(void) const
{
	return (this->_attack_power);
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
		std::cout << _hitpoints << ": ヒットポイントが0になりました。" << std::endl;

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
	if (this->_hitpoints >= 2147483647 - amount)
		this->_hitpoints = 2147483647;
	else
		this->_hitpoints += amount;
	std::cout << _name << "現在のHPは" << _hitpoints << "です。" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << "が破壊されました。" << std::endl;
	return ;
}