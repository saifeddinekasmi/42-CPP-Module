#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    ClapTrap saif("FRATELLO");
    ClapTrap saifo(saif);
    ScavTrap s;
    ClapTrap *var = &s; //anything claptrap do scavtrap do too !!
 
    saif.attack("zombie 1");
    saif.takeDamage(10);
    saif.beRepaired(9);
    var->setName("qMp");
    s.attack("zombie");
    s.guardGate();
}