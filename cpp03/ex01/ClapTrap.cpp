#include "ClapTrap.hpp"
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(ClapTrap obj)
{
	this->_name = obj.getName();
	this->_attackDamage = obj.getAttackDamage();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	return (*this);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage += amount;
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing ";
		std::cout << this->getAttackDamage() << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is unable to attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " got repaired with " << amount << " hit points" <<std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->_name << " is unable to repair" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points" <<std::endl;
}