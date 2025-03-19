#include "HumanB.hpp"

HumanB::HumanB(const std::string &hName) : name(hName), weapon(nullptr)
{
    std::cout << "humanB constructor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "humanB destructor called" << std::endl;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}