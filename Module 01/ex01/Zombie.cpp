#include "Zombie.hpp"

Zombie::Zombie() : name("noName")
{
//std::cout << "Zombie "<< name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie "<< name << " deleted." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::set_name(std::string zName)
{
    name = zName;
}
