
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Clap trapper"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage): name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
    std::cout << "Claptrap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return ;
    }
    if (this->energyPoints <= 0)
        std::cout << "ClapTrap" << this->name << " couldnt attack since it doesnt have any more energy left" << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "ClapTrap" << this->name << " couldnt attack since it doesnt have any more hitpoints left" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= amount)
    {
        if (hitPoints > 0)
            std::cout << "Claptrap " << name << " took " << amount << " points of damage" << std::endl;
        hitPoints = 0;
        return ;
    }
    this->hitPoints -= amount; 
    std::cout << "ClapTrap " << this->name << " takes " << amount << " of damage" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " repairs itself with " << amount << " hitpoints" << std::endl;
        this->energyPoints -= 1;
        this->hitPoints += amount;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " couldnt repair itself since it doesnt have any more energy left" << std::endl;
    return ;
}