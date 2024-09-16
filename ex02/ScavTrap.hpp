#ifndef ScavTRAP_H
#define ScavTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		void attack(const std::string& target);
		void guardGate(void);
		~ScavTrap(void);
};

#endif