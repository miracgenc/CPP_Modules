#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    this->annocunce();
}

Zombie::~Zombie()
{
    std::cout << this->name << " deleted" << std::endl;
}

void Zombie::annocunce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}