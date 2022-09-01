#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap:public ClapTrap
{
	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& obj);
		ScavTrap& operator=(ScavTrap const& obj);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();

/* 		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string const& getName()const;
		unsigned int const& getHpoints()const;
		unsigned int const& getEpoints()const;
		unsigned int const& getAtkdmg()const;
		void setName(std::string name);
		void setAtkdmg(unsigned int const& atkdmg);
		void setHpoints(unsigned int const& hpoints);
		void setEpoints(unsigned int const& epoints); */
	private:
/* 		protected:

		std::string			_name;
		unsigned int		_atkdmg;
		unsigned int		_hpoints);
		unsigned int		_epoints); */
};

#endif
