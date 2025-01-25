#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool guard;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& copy);
		~ScavTrap();
		ScavTrap &operator=(ScavTrap &src);
		void attack(const std::string& target);
		void guardGate();
};
