#include "Zombie.hpp"

int main()
{
    randomChump("zombie1");
    
    Zombie *zombie = newZombie("zombi2");
    delete zombie;
}