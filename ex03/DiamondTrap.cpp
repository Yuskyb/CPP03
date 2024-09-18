#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
			: ClapTrap("default_clap_name", 100, 50, 30), _name("default")
{
	std::cout << this->_name << "が生成されました。" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
			: ClapTrap(name + "_clap_name", 100, 50, 30),
			ScavTrap(name),
			FragTrap(name),
			_name(name)
{
	std::cout << _name << _attack_power<< "が生成されました。" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
		: ClapTrap(static_cast<const ClapTrap&>(other)),
			ScavTrap(static_cast<const ScavTrap&>(other)),
			FragTrap(static_cast<const FragTrap&>(other)),
			 _name(other._name)
{
	std::cout << _name << "が生成されました。" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(static_cast<const ClapTrap&>(other));
		this->_name = other._name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap: " << ClapTrap::_name << "です。" << std::endl;
	std::cout << "DiamondTrap: " << _name << "です。" << std::endl;

}

DiamondTrap::~DiamondTrap()
{
		std::cout << _name << "が破壊されました。" << std::endl;
}