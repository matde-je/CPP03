
#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("morcao");
    ClapTrap b("morca");
    a.attack("morca");
    b.takeDamage(0);
    b.beRepaired(0);
    b.attack("morcao");
    a.takeDamage(0);
    a.beRepaired(0);

}