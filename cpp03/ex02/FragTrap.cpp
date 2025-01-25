#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << "Wanna high five?" << std::endl;
}
    
FragTrap::FragTrap(): ClapTrap()
{
    this->name = "Basic FragTrap";
    this->attack_damage = 30;
    this->energy_points = 100;
    this->hit_points = 100;
    std::cout << "A FRAGTRAP Instance has created with default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->name = name;
    this->attack_damage = 30;
    this->energy_points = 100;
    this->hit_points = 100;
    std::cout << "A FRAGTRAP Instance has created with default constructor" << std::endl;
}
FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
    std::cout << "A FragTrap instance created with copy constructor." << std::endl;
}
FragTrap::~FragTrap()
{
        std::cout << "A FRAGTRAP Instance destroyed with deconstructor" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap &src)
{
    std::cout << "FlagTrap copy assignment operator called" << std::endl;
    this->name = src.name;
    this->hit_points = src.hit_points;
    this->attack_damage = src.attack_damage;
    this->energy_points = src.energy_points;
    return *this;
}