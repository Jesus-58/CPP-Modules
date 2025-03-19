#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie
{
    std::string name;

    public:
        
        Zombie(std::string zName);
        ~Zombie();
        void    announce();
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif