#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Clappy");

    robot.attack("Target Dummy");
    robot.takeDamage(3);
    robot.beRepaired(2);
    robot.attack("Target Dummy");
    robot.takeDamage(8);
    robot.attack("Target Dummy");
    robot.beRepaired(5);

    return 0;
}


