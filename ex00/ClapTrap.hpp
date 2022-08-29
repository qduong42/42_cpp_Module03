#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& obj);
		ClapTrap& operator=(ClapTrap const& obj);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName()const;
		unsigned int getHpoints()const;
		unsigned int getEpoints()const;
		unsigned int getAtkdmg()const;
		void setName(std::string name);
		void setHpoints(unsigned int hpoints);
		void setEpoints(unsigned int epoints);
		void setAtkdmg(unsigned int atkdmg);

	private:

		std::string			_name;
		unsigned int		_atkdmg;
		unsigned int		_hpoints;
		unsigned int		_epoints;
};

#endif
