#ifndef CLAPTRAP_HPP   
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        int HitPoint;
        int energyPoint;
        int attackDamage;
    public:
        // ClapTrap(const char * str);
		ClapTrap(std::string Name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj2);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);        
};

#endif