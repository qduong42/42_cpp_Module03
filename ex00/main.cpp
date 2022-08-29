#include "ClapTrap.hpp"

int main()
{
	ClapTrap Tony("Tony");
	ClapTrap Ha("Ha");
	Tony.attack(Ha.getName());
	Ha.takeDamage(Tony.getAtkdmg());
	Ha.beRepaired(10);
	return (0);
}