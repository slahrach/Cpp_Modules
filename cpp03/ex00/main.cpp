#include "ClapTrap.hpp"
#include <iostream>
int main()
{
	ClapTrap player("gruz");
	player.setAttackDamage(15);
	player.attack("player2");
	player.takeDamage(5);
	std::cout << player.getHitPoints() << std::endl;
	player.beRepaired(60);
	std::cout << player.getHitPoints() << std::endl;
}