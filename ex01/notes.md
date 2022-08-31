1. Constructing derived class calling constructor of base class in initialisation list is good?
	- Base class constructed, then derived class.

Destruction:
- Derived class destructed first then base class.



Questions:

1. Polymorphism: same variable names in both base and derived class? This keyword takes which values? It seems the derived variables are prioritized: how to get base values?
	- It would seem base class (inherited) values can be accessed with this->ClapTrap::_name