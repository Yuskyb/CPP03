#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("default", 100, 100, 30)
{
	std::cout << "FragTrap: " << _name << " was generated" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap: " << _name << " was generated" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(static_cast<const ClapTrap&>(other))
{
	std::cout << "FragTrap: " << _name << " was generated" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(static_cast<const ClapTrap&>(other));
	}
	return (*this);
}

unsigned int FragTrap::get_attack(void) const
{
	return (this->_attack_power);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Let's high-five!!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: " << _name << " was destroyed" << std::endl;
}