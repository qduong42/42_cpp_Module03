#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(std::string name);
		FragTrap(FragTrap const& obj);
		FragTrap& operator=(FragTrap const& obj);
		~FragTrap();
		void highFiveGuys(void);
		void attack(const std::string& target);
	private:

};

#endif
