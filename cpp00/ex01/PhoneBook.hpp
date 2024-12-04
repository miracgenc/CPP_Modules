#pragma once

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    
    public:
        std::string cut_str(std::string str);
        void add(int index);
        void list_all();
        void search(int index);
};
