#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
        std::string isArmed;
    private:
        Weapon *weapon;
        std::string name;
};