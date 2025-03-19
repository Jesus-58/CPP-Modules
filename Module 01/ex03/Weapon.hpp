#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class   Weapon
{
        std::string type;
    
    public:
    
        Weapon(const std::string &wType);
        ~Weapon();
        const std::string &getType() const;
        void setType(const std::string &newType);
};

#endif