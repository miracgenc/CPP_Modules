#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        void highFivesGuys(void);
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& src);
        ~FragTrap();
        FragTrap &operator=(FragTrap &src);
};