#include "ScavTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->ClapTrap::setAtkdmg(20);
	this->ClapTrap::setHpoints(100);
	this->ClapTrap::setEpoints(50);
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " has been activated!" << std::endl;
	// printClapTrapStat(*this);
}

ScavTrap::ScavTrap(ScavTrap const& obj) :ClapTrap()
{*this = obj;}

ScavTrap& ScavTrap::operator=(ScavTrap const& obj)
{
	if (this != &obj)
	{
		this->ClapTrap::setName(obj.ClapTrap::getName());
		this->ClapTrap::setHpoints(obj.ClapTrap::getHpoints());
		this->ClapTrap::setAtkdmg(obj.ClapTrap::getAtkdmg());
		this->ClapTrap::setEpoints(obj.ClapTrap::getEpoints());
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " has been destroyed" << std::endl;
}

//	MEMBER FUNCTIONS

void ScavTrap::guardGate()
{
	std::cout << "Scav Trap is now in Gate keeper mode >:D" << std::endl;
	return ;
}
/**
 * @brief without using virtual, attack defaults to most derived class until specified.
 * 
 * @param target 
 */
void ScavTrap::attack(const std::string& target)
{
	if (this->getEpoints() < 1)
	{
		std::cout << "Not enough Energy Points to attack!" << std::endl;
	}
	if (this->getHpoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is already dead" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target 
				  << " , dealing " << this->getAtkdmg() << " points of damage!" << std::endl;
		this->setEpoints(_epoints - 1);
	}
}
