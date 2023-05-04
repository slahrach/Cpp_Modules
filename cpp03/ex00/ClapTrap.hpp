#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
	private :
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	public :
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & copy);
	~ClapTrap(void);
	ClapTrap& operator =(ClapTrap& obj);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string	getName(void)const;
	int		getHitPoints(void) const;
	int		getEnergyPoints(void) const;
	int		getAttackDamage(void) const;
	void	setAttackDamage(unsigned int amount);
};
#endif