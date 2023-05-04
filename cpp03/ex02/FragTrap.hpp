#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
	public :
	FragTrap(std::string name);
	FragTrap(FragTrap & copy);
	~FragTrap(void);
	FragTrap& operator=(FragTrap obj);
	void	highFivesGuys(void) const;
};