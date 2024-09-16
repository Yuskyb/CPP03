#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string _name;
	public:
		DiamondTrap(const std::string& name);
		void	whoAmI(void);
		~DiamondTrap(void);

		using ScavTrap::attack;
};

#endif