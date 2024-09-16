#ifndef ScavTRAP_H
#define ScavTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(const std::string& name);
		void attack(const std::string& target);
		void guardGate(void);
		~ScavTrap(void);
};

#endif