#include "PhoneBook.hpp"
#include <iomanip>

std::string PhoneBook::cut_str(std::string input) {
    if (input.length() > 10) {
        return input.substr(0, 9) + ".";
    }
    return input;
}

void PhoneBook::add(int i)
{
    std::string input;

    while(input.empty())
    {
        std::cout << "Name : ";
        std::getline(std::cin.ignore(1), input);
        this->contacts[i].set_name(input);
    }
        input.clear();  
    while(input.empty())
    {
        std::cout << "Surname : ";
        std::getline(std::cin, input);
        this->contacts[i].set_sur_name(input);
    }
        input.clear();
    while(input.empty())
    {
        std::cout << "Tel No : ";
        std::getline(std::cin, input);
        this->contacts[i].set_tel_no(input);
    }
        input.clear();
    while(input.empty())
    {
        std::cout << "Nick Name : ";
        std::getline(std::cin, input);
        this->contacts[i].set_nick_name(input);
    }
        input.clear();
    while(input.empty())
    {
        std::cout << "Darkest Secret : ";
        std::getline(std::cin, input);
        this->contacts[i].set_dark_secret(input);
    }
        input.clear();
};

void PhoneBook::search(int index)
{
        std::cout << "=============================" << std::endl;
        std::cout << "Detailed information of user:" << std::endl;
        std::cout << "Name: " << this->contacts[index].name << std::endl; 
        std::cout << "Surname: " << this->contacts[index].sur_name << std::endl;
        std::cout << "Tel No: " << this->contacts[index].tel_no << std::endl;
        std::cout << "Nick Name: " << this->contacts[index].nick_name << std::endl;
        std::cout << "Darkest Secret: " << this->contacts[index].dark_secret << std::endl;
        std::cout << "=============================" << std::endl;
}

void PhoneBook::list_all()
{
    int i = 0;
    std::cout << "=============================================" << std::endl;
    std::cout <<"    index |first name|last name |nick name |" << std::endl;
    while(i < 8)
    {
        std::cout << std::right << std::setw(9) << i+1 << " |";
        std::cout << std::right << std::setw(10) << cut_str(this->contacts[i].name) << "|"; 
        std::cout << std::right << std::setw(10) << cut_str(this->contacts[i].sur_name) << "|";
        std::cout << std::right << std::setw(10) << cut_str(this->contacts[i].nick_name) << "|" << std::endl;
        i++;
    }
    std::cout << "=============================================" << std::endl;
}

