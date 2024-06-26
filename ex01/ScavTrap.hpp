#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include "ClapTrap.hpp"

//inheratance
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);

        void guardGate();
        void attack(const std::string& target);
};


#endif