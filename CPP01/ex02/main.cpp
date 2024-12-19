#include <string>
#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "The memory address of the string variable = " << &var << std::endl;
    std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
    std::cout << "The memory address hold by stringREF = " << &stringREF << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "The value of the string = " << var << std::endl;
    std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}
