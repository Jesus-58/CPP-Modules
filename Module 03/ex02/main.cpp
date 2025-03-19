#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap robot("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    robot.attack("Dummy");
    scav.attack("Dummy");
    frag.attack("Dummy");

    robot.takeDamage(5);
    scav.takeDamage(20);
    frag.takeDamage(50);

    robot.beRepaired(3);
    scav.beRepaired(10);
    frag.beRepaired(20);

    scav.guardGate();
    frag.highFivesGuys();

    return 0;
}
