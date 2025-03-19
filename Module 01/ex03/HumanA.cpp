#include "HumanA.hpp"

HumanA::HumanA(const std::string &hName, Weapon &w) : name(hName), weapon(w)
{
    std::cout << "humanA constructor called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "humanA destructor called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}