
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
{
    this->name = "Clap trapper";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
{
    std::cout << "Claptrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = hitPoints;
    this->energyPoints = energyPoints;
    this->attackDamage = attackDamage;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Claptrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "Assignment operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return ;
    }
    else if (this->energyPoints <= 0)
        std::cout << "ClapTrap" << this->name << " couldnt attack because it doesnt have energy " << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "ClapTrap" << this->name << " couldnt attack because it doesnt have hitpoints " << std::endl;
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
    std::cout << "ClapTrap " << this->name << " couldnt repair itself because it doesnt have energy " << std::endl;
}