#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		using ScavTrap::attack;
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		unsigned int get_attack(void) const;
		void	whoAmI(void);
		void attack(const std::string& target);
		~DiamondTrap(void);
};
