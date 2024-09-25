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
		: ClapTrap(static_cast<ClapTrap&>(other)),
			ScavTrap(static_cast<ScavTrap&>(other)),
			FragTrap(static_cast<FragTrap&>(other)),
			 _name(other._name)
{
	std::cout << _name << "was generated" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(static_cast<ClapTrap&>(other));
		this->_name = other._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap: " << _name << std::endl;

}

DiamondTrap::~DiamondTrap()
{
		std::cout << _name << "was destroyed" << std::endl;
}