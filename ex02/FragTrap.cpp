#include "FragTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->ClapTrap::setAtkdmg(30);
	this->ClapTrap::setHpoints(100);
	this->ClapTrap::setEpoints(100);
	std::cout << "FragTrap " << this->ClapTrap::getName() << " has been activated!" << std::endl;
	printClapTrapStat(*this);
}

FragTrap::FragTrap(FragTrap const& obj): ClapTrap()
{*this = obj;}

FragTrap& FragTrap::operator=(FragTrap const& obj)
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

FragTrap::~FragTrap()
{	
	std::cout << "FragTrap " << this->getName() << " has been destroyed" << std::endl;
}

//	MEMBER FUNCTIONS

void FragTrap::highFiveGuys(void)
{
	if (this->_hpoints > 0)
		std::cout << "FragTrap high fives their team mates" << std::endl;
	else
		std::cout << "FragTrap dead, unable to high five" << std::endl;
}

/**
 * @brief Implement a new attack function!
 * 
 */
void FragTrap::attack(const std::string& target)
{
	if (this->getEpoints() < 1)
	{
		std::cout << "Not enough Energy Points to attack!" << std::endl;
	}
	if (this->getHpoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " is already dead" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target 
				  << " , dealing " << this->getAtkdmg() << " points of damage!" << std::endl;
		this->setEpoints(this->_epoints - 1);
	}
}
