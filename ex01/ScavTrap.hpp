#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap:public ClapTrap
{
	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& obj);
		ScavTrap& operator=(ScavTrap const& obj);
		~ScavTrap();
		void guardGate();

	private:

		std::string _name;
};

#endif
