#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default", 100, 50, 20)
{
	std::cout << _name << "was generated" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap: " << _name << "was generated" << std::endl;
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: You are now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << _name << "was destroyed" << std::endl;
	return ;
}