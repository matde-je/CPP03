
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "Fragtrap name constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(void): ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "Fragtrap constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Fragtrap destructor called" << std::endl;
    return ;
}

//This member function displays a positive high fives request on the standard output
void FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << name<< " positive high fives" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return ;
    }
    if (this->energyPoints <= 0)
        std::cout << "FragTrap" << this->name << " couldnt attack since it doesnt have any more energy left" << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "FragTrap" << this->name << " couldnt attack since it doesnt have any more hitpoints left" << std::endl;
    return ;
}