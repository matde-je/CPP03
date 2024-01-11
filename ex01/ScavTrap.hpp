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
		ScavTrap(const ScavTrap& src);
		ScavTrap& operator=(const ScavTrap& src);

        void guardGate();
        void attack(const std::string& target);
};


#endif