
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(void) 
{
    this->name = "Clap trapper";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
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

//When ClapTrack attacks, it causes its target to lose <attack damage> hit points
//cost 1 energy point each. ClapTrap can’t do anything if it has no hit points or energy points 
void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
    }
    else if (this->energyPoints <= 0)
        std::cout << "ClapTrap" << this->name << " cant attack because it doesnt have energy" << std::endl;
    if (this->hitPoints <= 0)
        std::cout << "ClapTrap" << this->name << " cant attack because it doesnt have hitpoints" << std::endl;
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
    std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage" << std::endl;
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
    std::cout << "ClapTrap " << this->name << " cant repair itself because it doesnt have energy" << std::endl;
}