#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& obj);
		DiamondTrap& operator=(DiamondTrap const& obj);
		~DiamondTrap();
		void whoAmI();

	private:

		std::string name;
};

#endif
