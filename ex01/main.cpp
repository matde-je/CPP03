
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("morcao");
    ScavTrap b("morca");

    a.guardGate();

    a.attack("morca");
    b.takeDamage(20);
    b.beRepaired(5);
    b.attack("morcao");
    a.takeDamage(20);
    a.beRepaired(10);
}
