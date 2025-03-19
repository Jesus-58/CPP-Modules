#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot("Clappy");
    ScavTrap scav("Scavvy");

    robot.attack("Dummy");
    scav.attack("Dummy");

    robot.takeDamage(5);
    scav.takeDamage(20);

    robot.beRepaired(3);
    scav.beRepaired(10);

    scav.guardGate();

    return 0;
}
