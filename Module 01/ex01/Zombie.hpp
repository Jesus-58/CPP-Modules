#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   Zombie
{
    std::string name;

    public:
        
        Zombie();
        Zombie(std::string zName);
        ~Zombie();
        void    announce();
        void    set_name(std::string zName);
};

Zombie* zombieHorde(int N, std::string name);

#endif