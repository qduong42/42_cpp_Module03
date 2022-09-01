#include "DiamondTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

DiamondTrap::DiamondTrap(std::string nem): ClapTrap(nem + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = nem;
	this->setAtkdmg(FragTrap::_initAtkdmg);
	this->setHpoints(FragTrap::_initHpoints);
	this->setEpoints(ScavTrap::_initepoints);
	// printClapTrapStat(*this);
	std::cout << "DiamondTrap " << this->_name << " has been activated!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& obj):ClapTrap(obj.getName() + "_clap_name"), ScavTrap(obj.getName() + "_clap_name"), FragTrap(obj.getName() + "_clap_name")
{*this = obj;}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& obj)
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

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->ClapTrap::getName() << " has been destroyed!" << std::endl;
}

//	MEMBER FUNCTIONS

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}
