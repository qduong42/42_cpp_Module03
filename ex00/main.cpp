#include "ClapTrap.hpp"

int main()
{
	ClapTrap Tony("Tony");
	ClapTrap Ha("Ha");
	printClapTrapStat(Tony);
	printClapTrapStat(Ha);
	Tony.attack(Ha.getName());
	Ha.takeDamage(Tony.getAtkdmg());
	printClapTrapStat(Ha);
	Ha.beRepaired(10);
	printClapTrapStat(Ha);
	return (0);
}