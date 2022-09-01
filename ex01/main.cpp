#include "ScavTrap.hpp"

/**
 * @brief showd difference between 3 ways of calling attack functions. Virtual not needed/useful because 
 * no pointers in play yet.
 * 
 * @return int 
 */
int main()
{
	ScavTrap Serena("Serena");
	ClapTrap Ha("Ha");
	Ha.setHpoints(21);
	Serena.guardGate();
	Serena.attack(Ha.getName());
	Ha.takeDamage(Serena.ClapTrap::getAtkdmg());
	printClapTrapStat(Ha);
	printClapTrapStat(Serena);
	Serena.ScavTrap::attack(Ha.getName());
	Ha.takeDamage(Serena.ClapTrap::getAtkdmg());
	printClapTrapStat(Ha);
	printClapTrapStat(Serena);
	Serena.ClapTrap::attack(Ha.getName());
	Ha.takeDamage(Serena.ClapTrap::getAtkdmg());
	Ha.beRepaired(10);
	printClapTrapStat(Ha);
	printClapTrapStat(Serena);
	return (0);
}