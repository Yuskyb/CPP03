#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", 100, 50, 20)
{
	std::cout << _name << " was generated" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap: " << _name << " was generated" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap: " << _name << " was generated copy" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(static_cast<ClapTrap>(other));
	}
	return (*this);
}

unsigned int ScavTrap::get_attack(void) const
{
	return (this->_attack_power);
}

void	ScavTrap::attack(const std::string& target)
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap:  You are now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << _name << " was destroyed" << std::endl;
	return ;
}