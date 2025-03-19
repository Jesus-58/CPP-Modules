#include "Zombie.hpp"

Zombie::Zombie(std::string zName) : name(zName)
{
    std::cout << "Zombie "<< name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie "<< name << " deleted." << std::endl;
}

void    Zombie::announce()
{
    if (name == "cristiano")
	    std::cout << name << ":  BraiiiiiiinnnzzzZ... Siuuuuh\n";
	else if (name == "messi")
	    std::cout << name << ":  BraiiiiiiinnnzzzZ... Que mira bobo\n";
	else
	    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
}
