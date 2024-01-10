#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include "ClapTrap.hpp"

//inheratance
class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);

        void highFivesGuys(void);
        void attack(const std::string& target);
};


#endif