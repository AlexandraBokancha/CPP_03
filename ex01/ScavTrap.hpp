#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

// a derived class from ClapTrap
// it inherit its conststructors and destructor

class ScavTrap : public ClapTrap
{
    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();

        void guardGate(); // function specific to this class
    private:

};

#endif

