#include "Zombie.hpp"

int main()
{
    randomChump("jesus");

    Zombie* heapZombie = newZombie("cristiano");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}