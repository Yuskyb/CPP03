#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) :ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
 	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_power = FragTrap::_attack_power;
	    std::cout << "ClapTrap: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap: " << this->_name << "が生成されました。" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: " << _name << std::endl;
	std::cout << "ClapTrap:あああ " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: " << _name << "が破壊されました。" << std::endl;
	return ;
}