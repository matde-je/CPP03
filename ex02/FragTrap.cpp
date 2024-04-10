
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "Fragtrap name constructor called" << std::endl;
}

FragTrap::FragTrap(void): ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "Fragtrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
    std::cout << "Fragtrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "Assignment operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

//This member function displays a positive high fives request on the standard output
void FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << name << " positive high fives" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return ;
    }
    else if (this->energyPoints <= 0)
        std::cout << "FragTrap" << this->name << " couldnt attack because it doesnt have energy " << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "FragTrap" << this->name << " couldnt attack because it doesnt have hitpoints " << std::endl;
}