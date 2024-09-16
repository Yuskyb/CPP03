#ifndef FragTRAP_H
#define FragTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		void	highFivesGuys(void);
		~FragTrap(void);
};

#endif