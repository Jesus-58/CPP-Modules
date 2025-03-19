#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << other.name << " has been copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "FragTrap " << other.name << " has been assigned!" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "FragTrap " << this->name << " is out of energy or health and cannot attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " wants to high five everyone!" << std::endl;
}
