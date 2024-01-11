
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "Scavtrap name constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(void): ClapTrap("ScavTrap", 100, 50, 20)
{
    std::cout << "Scavtrap constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap destructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return (*this);
}





void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << name << " is in gate keeper mode" << std::endl;
}

// attack() will print different messages
void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return ;
    }
    if (this->energyPoints <= 0)
        std::cout << "ScavTrap" << this->name << " couldnt attack since it doesnt have any more energy left" << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "ScavTrap" << this->name << " couldnt attack since it doesnt have any more hitpoints left" << std::endl;
    return ;
}