
#include "FragTrap.hpp"

int main()
{
    FragTrap a("morcao");
    FragTrap b("morca");
    FragTrap c(a);

    c.highFivesGuys();

    a.attack("morca");
    b.takeDamage(20);
    b.beRepaired(5);
    b.attack("morcao");
    a.takeDamage(20);
    a.beRepaired(10);
}
