#include "Harl.hpp"

Harl::Harl()
        {
            levels[0] = "DEBUG";
            levels[1] = "INFO";
            levels[2] = "WARNING";
            levels[3] = "ERROR";
            logFunctions[0] = &Harl::debug;
            logFunctions[1] = &Harl::info;
            logFunctions[2] = &Harl::warning;
            logFunctions[3] = &Harl::error;
        }

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! " << std::endl;
}

void Harl::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;

    while(i != 4)
    {
        if(this->levels[i] == level)
        {
            (this->*logFunctions[i])();
            break;   
        }
        i++;
        std::cout << i << std::endl;;
    }
    if(i > 3)
        std::cout << "Harl is confused"<< std::endl;
}