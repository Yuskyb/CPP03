#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		unsigned int get_attack(void) const;
		ScavTrap& operator=(const ScavTrap& other);
		void guardGate(void);
		~ScavTrap(void);
};
