#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & copy)
{
	*this = copy;
	std::cout << "Copy Constructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap obj)
{
	this->_attackDamage = obj.getAttackDamage();
	this->_energyPoints = obj.getEnergyPoints();
	this->_hitPoints = obj.getHitPoints();
	this->_name = obj.getName();
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing ";
		std::cout << this->getAttackDamage() << " point of damage" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is unable to attack" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}