#include "ClapTrap.hpp"

//	CONSTRUCTORS | DESTRUCTOR

ClapTrap::ClapTrap(std::string name):_name(name), _atkdmg(20), _hpoints(100), _epoints(50)
{
	std::cout << "BEEP BOOP Claptrap " << this->getName() << " activated!" << std::endl;
	printClapTrapStat(*this);
}

ClapTrap::ClapTrap():_name("unknown"),  _atkdmg(0), _hpoints(0), _epoints(0)
{
	std::cout << "Default Claptrap " << this->getName() << " activated!" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const& obj)
{*this = obj;}

ClapTrap& ClapTrap::operator=(ClapTrap const& obj)
{
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->setAtkdmg(obj.getAtkdmg());
		this->setHpoints(obj.getHpoints());
		this->setEpoints(obj.getEpoints());
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->getName() << " has been destroyed" << std::endl;
}

//	MEMBER FUNCTIONS

std::string const& ClapTrap::getName()const
{
	return (this->_name);
}

unsigned int const& ClapTrap::getHpoints()const
{
	return (this->_hpoints);
}

unsigned int const& ClapTrap::getEpoints()const
{
	return (this->_epoints);
}

unsigned int const& ClapTrap::getAtkdmg()const
{
	return (this->_atkdmg);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHpoints(unsigned int const& hpoints)
{
	this->_hpoints = hpoints;
}

void ClapTrap::setEpoints(unsigned int const& epoints)
{
	this->_epoints = epoints;
}

void ClapTrap::setAtkdmg(unsigned int const& atkdmg)
{
	this->_atkdmg = atkdmg;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEpoints() < 1)
	{
		std::cout << "Not enough Energy Points to attack!" << std::endl;
	}
	if (this->getHpoints() <= 0)
	{
		std::cout << "Clap Trap " << this->getName() << " is already dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target 
				  << " , dealing " << this->getAtkdmg() << " points of damage!" << std::endl;
		this->setEpoints(_epoints - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHpoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead!" << std::endl;
	else
	{
		if (amount >= this->getHpoints())
		{
			std::cout << "ClapTrap " << this->getName() << " took " << this->getHpoints() << " damage!" << std::endl;
			this->setHpoints(0);
			std::cout << "ClapTrap " << this->getName() << " Died" << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << this->getName() << " took " << amount << " damage!" << std::endl;
			this->setHpoints(this->_hpoints - amount);			
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEpoints() < 1)
	{
		std::cout << "Not enough Energy Points to be repaired!" << std::endl;
	}
	else
	{
		this->setHpoints(_hpoints + amount);
		std::cout << "Clap trap " << this->getName() << " was repaired for " << amount << " HP!" << std::endl;
	}
}

void	printClapTrapStat(ClapTrap& ClapTrap) 
{
	std::cout << "\n=====XTrap " << ClapTrap.getName() << "'s stats=====" << std::endl;
	std::cout << "Hit points: " << ClapTrap.getHpoints() << std::endl;
	std::cout << "Energy points: " << ClapTrap.getEpoints() << std::endl;
	std::cout << "Attack damage: " << ClapTrap.getAtkdmg() << std::endl;
	std::cout << "======================================\n" << std::endl;
}
