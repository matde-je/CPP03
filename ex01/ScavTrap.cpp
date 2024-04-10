
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "Scavtrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(void): ClapTrap("ScavTrap", 100, 50, 20)
{
    std::cout << "Scavtrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
    std::cout << "Scavtrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "Assignment operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
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
    else if (this->energyPoints <= 0)
        std::cout << "ScavTrap" << this->name << " cant attack because it doesnt have energy" << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "ScavTrap" << this->name << " cant attack because it doesnt have hitpoints" << std::endl;
}