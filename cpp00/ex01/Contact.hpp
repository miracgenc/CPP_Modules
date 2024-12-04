#pragma once

#include <iostream>
#include <string>

class  Contact{
    public:
        void set_name(std::string name);
        void set_sur_name(std::string sur_name);
        void set_tel_no(std::string tel_no);
        void set_nick_name(std::string nick_name);
        void set_dark_secret(std::string dark_secret);
        std::string name;
        std::string dark_secret;
        std::string sur_name;
        std::string tel_no;
        std::string nick_name;
};