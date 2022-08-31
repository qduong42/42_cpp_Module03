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
		std::string const& getName()const;
		unsigned int const& getHpoints()const;
		unsigned int const& getEpoints()const;
		unsigned int const& getAtkdmg()const;
		void setName(std::string name);
		void setAtkdmg(unsigned int const& atkdmg);
		void setHpoints(unsigned int const& hpoints);
		void setEpoints(unsigned int const& epoints);

	private:

		std::string			_name;
		unsigned int		_atkdmg;
		unsigned int		_hpoints;
		unsigned int		_epoints;
};

void	printClapTrapStat(ClapTrap& ClapTrap);

#endif
