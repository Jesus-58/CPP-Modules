#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << this->name << " has been copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of HP and cannot attack!" << std::endl;
        return;
    }
    if (this->energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy to attack!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already down!" << std::endl;
        return;
    }
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "ClapTrap " << this->name << " takes " << amount
              << " points of damage! Remaining HP: " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of HP and cannot be repaired!" << std::endl;
        return;
    }
    if (this->energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy to repair!" << std::endl;
        return;
    }
    this->energyPoints--;
    this->hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " repairs itself by " << amount
              << " points! New HP: " << this->hitPoints << std::endl;
}
