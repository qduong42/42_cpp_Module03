#include "DiamondTrap.hpp"

/**
 * @brief showed difference between 3 ways of calling attack functions. Virtual not needed/useful because 
 * no pointers in play yet.
 * 
 * @return int 
 */
int main()
{
	ScavTrap *pointer = new DiamondTrap ("James");
	// DiamondTrap pleb("pleb");
	// pleb.setAtkdmg(900);
	// pleb.ScavTrap::attack("someone");
	// pleb.guardGate();
	// pleb.highFiveGuys();
	// pleb.whoAmI();
	delete pointer;
	return (0);
}
