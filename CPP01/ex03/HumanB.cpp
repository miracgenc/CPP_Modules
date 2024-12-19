#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack()
{

    if(!((this->isArmed).empty()))
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " doesn't have a weapon right now" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->isArmed = "Armed";
    this->weapon = &weapon;
}