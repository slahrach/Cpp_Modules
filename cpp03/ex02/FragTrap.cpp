#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_attackDamage = 100;
	this->_energyPoints = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(FragTrap & copy)
{
	*this = copy;
	std::cout << "Copy Constructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap obj)
{
	this->_attackDamage = obj.getAttackDamage();
	this->_energyPoints = obj.getEnergyPoints();
	this->_hitPoints = obj.getHitPoints();
	this->_name = obj.getName();
	return (*this);
}
void	FragTrap::highFivesGuys(void) const
{
	std::cout << "guuuyyys high five me !!!!!" <<std::endl;
}