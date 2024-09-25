#pragma once

#include <iostream>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_power;

	public:
		ClapTrap(void);
		ClapTrap(const std::string& name,
					unsigned int hitpoints,
					unsigned int energy_points,
					unsigned int attack_power);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		unsigned int get_attack(void) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap(void);
};
