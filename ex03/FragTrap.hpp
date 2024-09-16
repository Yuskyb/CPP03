#ifndef FragTRAP_H
#define FragTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(const std::string& name);
		void	highFivesGuys(void);
		~FragTrap(void);
};

#endif