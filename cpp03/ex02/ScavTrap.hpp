#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public :
    ScavTrap(std::string name);
    ScavTrap(ScavTrap & copy);
    ~ScavTrap(void);
    ScavTrap& operator=(ScavTrap obj);
    void    attack(const std::string& target);
    void    guardGate(void);
};