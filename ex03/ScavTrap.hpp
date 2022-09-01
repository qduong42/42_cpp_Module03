#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
	public:

		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(ScavTrap const& obj);
		ScavTrap& operator=(ScavTrap const& obj);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();

	protected:

		static int const _initAtkdmg = 20;
		static int const _initHpoints = 100;
		static int const _initepoints = 50;
};

#endif
