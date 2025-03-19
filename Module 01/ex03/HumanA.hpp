#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class   HumanA
{
        std::string name;
        Weapon      &weapon;
    
    public:
    
        HumanA(const std::string &hName, Weapon &w);
        ~HumanA();
        void    attack();
};

#endif