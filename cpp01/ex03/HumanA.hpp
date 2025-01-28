#include "HumanB.hpp"

class HumanA
{
    public:
        std::string name;
        Weapon &weapon;
        HumanA(std::string name, Weapon &weapon);
        void attack();
};