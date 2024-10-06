#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
			: ClapTrap("default_clap_name", 100, 50, 30), _name("default")
{
	std::cout << this->_name << "was generated" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
			: ClapTrap(name + "_clap_name", 100, 50, 30),
			ScavTrap(name),
			FragTrap(name),
			_name(name)
{
	std::cout << _name << _attack_power<< "was generated" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
		: ClapTrap(other),
			ScavTrap(other),
			FragTrap(other),
			 _name(other._name)
{
	std::cout << _name << "was generated" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap: " << _name << std::endl;
}

unsigned int DiamondTrap::get_attack(void) const
{
	return (this->_attack_power);
}

void DiamondTrap::attack(const std::string& target)
{
	(void)target;
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
		std::cout << _name << " was destroyed" << std::endl;
}
