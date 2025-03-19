#include "Weapon.hpp"

Weapon::Weapon(const std::string &wType) : type(wType)
{
    std::cout << "weapon constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "weapon destructor called" << std::endl;
}

const std::string &Weapon::getType() const
{
    return (type);
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}