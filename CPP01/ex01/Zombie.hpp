#include <string>
#include <iostream>

class Zombie
{
    public:
        std::string name;
        void annocunce(void);
        ~Zombie();
};

void delHorde(Zombie* horde);
Zombie* zombieHorde(int N, std::string name);