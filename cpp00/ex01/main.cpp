#include "PhoneBook.hpp"
#include <typeinfo>
#include <limits>

int main()
{
    PhoneBook phonebook;
    std::string cmd;
    size_t i = 0;
    int number = 0;
    while (true)
    {
        std::cout << "EXIT | SEARCH | ADD" << std::endl;
        std::cin >> cmd;
        if (std::cin.eof())
            break;
        if (cmd == "EXIT")
            break;
        else if(cmd == "SEARCH")
        {   
            phonebook.list_all();
            std::cout << "Enter a index number between 1 and 8 = ";
            std::cin >> number;
            std::cin.clear();
            if(std::cin.fail() || (number < 1 || number > 8))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input" << std::endl;
                continue;
            }
            phonebook.search(number-1);
        }
        else if(cmd == "ADD")
            phonebook.add(i++%8);
        cmd.clear();
    };
}