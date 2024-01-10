
#include "FragTrap.hpp"

int main()
{
    FragTrap a("morcao");
    FragTrap b;

    a.highFivesGuys();

    a.attack("morca");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("bitx");
    b.takeDamage(10);
    b.beRepaired(10);
}

// Claptrap name constructor called
// Fragtrap name constructor called
// Claptrap name constructor called
// Fragtrap constructor called

// Fragtrap morcao positive high fives
// FragTrap morcao attacks morca, causing 30 points of damage!
// ClapTrap morcao takes 5 of damage
// ClapTrap morcao repairs itself with 5 hitpoints
// FragTrap FragTrap attacks bitx, causing 30 points of damage!
// ClapTrap FragTrap takes 10 of damage
// ClapTrap FragTrap repairs itself with 10 hitpoints

// Fragtrap destructor called
// Claptrap destructor called
// Fragtrap destructor called
// Claptrap destructor called