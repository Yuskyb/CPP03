#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		void attack(const std::string& target);
		unsigned int get_attack(void) const;

		void guardGate(void);
		~ScavTrap(void);
};
