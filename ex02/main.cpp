#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/**
 * @brief showd difference between 3 ways of calling attack functions. Virtual not needed/useful because 
 * no pointers in play yet.
 * 
 * @return int 
 */
int main()
{
	ClapTrap pleb("pleb");
	FragTrap Fraggy("Fraggy");
	Fraggy.highFiveGuys();
	pleb.setAtkdmg(900);
	pleb.attack(Fraggy.getName());
	Fraggy.takeDamage(pleb.getAtkdmg());
	Fraggy.highFiveGuys();
	return (0);
}
