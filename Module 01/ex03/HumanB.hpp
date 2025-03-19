#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class   HumanB
{
        std::string name;
        Weapon      *weapon;
    
    public:
    
        HumanB(const std::string &hName);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &w);
};

#endif