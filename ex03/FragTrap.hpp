#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap(std::string name);
		FragTrap();
		FragTrap(FragTrap const& obj);
		FragTrap& operator=(FragTrap const& obj);
		~FragTrap();
		void highFiveGuys(void);

	protected:

		static int const _initAtkdmg = 30;
		static int const _initHpoints = 100;
		static int const _initepoints = 100;
};

#endif
