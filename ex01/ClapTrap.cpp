#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("default"),
	_hitpoints(10),
	_energy_points(10),
	_attack_power(0)
{
	std::cout << _name << " was genereted" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, unsigned int hitpoints,
					unsigned int energy_points, unsigned int attack_power) :
	_name(name),
	_hitpoints(hitpoints),
	_energy_points(energy_points),
	_attack_power(attack_power)
{
	std::cout << _name << " was genereted" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energy_points(other._energy_points),
	_attack_power(other._attack_power)
{
	std::cout << _name << " was genereted copy" << std::endl;
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
		std::cout << "No hitpoints" << std::endl;
		return ;
	}
	if (this->_energy_points <=0)
	{
		std::cout << "No energy_points" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << _name << " attacks " << target << ",causing " << get_attack() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints > 0)
	{
		if (_hitpoints <= amount)
			_hitpoints = 0;
		else
			_hitpoints -= amount;
	}
	else
	{
		std::cout << "Already no hitpoints" << std::endl;
		return ;
	}
	std::cout << _name << ": " << amount << " damaged" << std::endl;
	if (this->_hitpoints <= 0)
		std::cout << _name << ": dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints <=0)
	{
		std::cout << "No hitpoints" << std::endl;
		return ;
	}
	if (this->_energy_points <=0)
	{
		std::cout << "No energy_points" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << _name << ": " << amount << " recoverd" << std::endl;
	if (this->_hitpoints >= 2147483647 - amount)
		this->_hitpoints = 2147483647;
	else
		this->_hitpoints += amount;
	std::cout << _name << " The current HP is " << _hitpoints <<  std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " was destroyed" << std::endl;
	return ;
}