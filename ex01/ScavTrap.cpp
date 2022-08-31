#include "ScavTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = "Sam";
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " has been created" << std::endl;
	// std::cout << this->_name << this->ClapTrap::_name << std::endl;
	printClapTrapStat(*this);
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
