1. Constructing derived class calling constructor of base class in initialisation list is good?
	- Base class constructed, then derived class.

2. Virtual: Only needed when you put a derived class into pointer of base class. Virtual will "force" to try to find function implementation in most derived class.

Destruction:
- Derived class destructed first then base class.



Questions:

1. Polymorphism: same variable names in both base and derived class? This keyword takes which values? It seems the derived variables are prioritized: how to get base values?
	- It would seem base class (inherited) values can be accessed with this->ClapTrap::_name

2. Why can derived class be stored in base class pointer? Does the opposite work?( Seems no!) Down/upcast?

3. Pure virtual functions: Dont allow creation of that class instance. Apparently the function itself can still be accessed if public through name resolver. e.g virtual void attack() = 0; ClapTrap class
	- Diamond Trap inherit from ScavTrap public, inherit ClapTrap virtual: DiamondTrap.ClapTrap::attack
		# To solve: Change to protected.
4. Only one virtual needed for base deconstructor?