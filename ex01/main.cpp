
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("morcao");
    ScavTrap b;

    a.guardGate();

    a.attack("morca");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("bitx");
    b.takeDamage(10);
    b.beRepaired(10);
}

// Claptrap name constructor called
// Scavtrap name constructor called
// Claptrap name constructor called
// Scavtrap constructor called

// Scavtrap morcao is in gate keeper mode

// ScavTrap morcao attacks morca, causing 20 points of damage!

// ClapTrap morcao takes 5 of damage
// ClapTrap morcao repairs itself with 5 hitpoints
// ScavTrap ScavTrap attacks bitx, causing 20 points of damage!
// ClapTrap ScavTrap takes 10 of damage
// ClapTrap ScavTrap repairs itself with 10 hitpoints

// Scavtrap destructor called
// Claptrap destructor called
// Scavtrap destructor called
// Claptrap destructor called