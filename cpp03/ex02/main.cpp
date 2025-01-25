#include "ScavTrap.hpp"

int main()
{
    ClapTrap test("TestTrap");

    test.attack("deneme");
    test.takeDamage(5);
    test.beRepaired(15);
    test.takeDamage(25);
    test.attack("deneme2");

    std::cout << "=========================================" << std::endl;

    ScavTrap test1("test");
    ScavTrap test2;
    test1.attack("hello");

}