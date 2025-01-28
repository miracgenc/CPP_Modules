#include "Zombie.hpp"

void Zombie::annocunce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void delHorde(Zombie* horde)
{
    delete[] horde;
}

Zombie::~Zombie()
{
    std::cout << this->name << " deleted" << std::endl;
}