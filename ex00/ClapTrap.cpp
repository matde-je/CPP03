
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    return ;
}

ClapTrap::ClapTrap(void): name("Clap trapper"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
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






//When ClapTrack attacks, it causes its target to lose <attack damage> hit points
//cost 1 energy point each. ClapTrap can’t do anything if it has no hit points or energy points left
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

//When ClapTrap repairs itself, it gets <amount> hit points back. costs energy
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