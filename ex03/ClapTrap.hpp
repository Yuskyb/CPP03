#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_power;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(const std::string& name);
		~ClapTrap(void);
};

#endif