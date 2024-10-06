#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		void attack(const std::string& target);
		unsigned int get_attack(void) const;
		void	highFivesGuys(void);
		~FragTrap(void);
};
