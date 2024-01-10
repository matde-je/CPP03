
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("morcao");
    ClapTrap b;
    a.attack("morca");
    a.takeDamage(5);
    a.beRepaired(5);
    b.attack("bitx");
    b.takeDamage(10);
    b.beRepaired(10);

}