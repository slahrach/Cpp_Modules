#include "ScavTrap.hpp"
int main()
{
	ScavTrap scav("Gruz");
	scav.attack("me");
	std::cout << scav.getHitPoints() << std::endl;
	scav.beRepaired(15);
	scav.takeDamage(14);
	scav.beRepaired(5);
	std::cout << scav.getHitPoints() << std::endl;
}