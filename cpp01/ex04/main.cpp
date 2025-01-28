#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
int main(int argc, char** argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of parameters" << std::endl;
        return 0;
    }
    int i = 0, key = 0;
    std::string filename, s1, s2, contenta, replace, line, temp;
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    std::ifstream file(filename.c_str());
    replace = filename + ".replace";
    if(!file)
    {
        std::cout << "Cannot open the input file" << std::endl;
        return 0;
    }
    std::ofstream filereplace(replace.c_str());
    if(!filereplace)
    {
    {
        std::cout << "Cannot open the output file" << std::endl;
        file.close();
        return 0;
    }
    }
    std::ostringstream ss;
    ss << file.rdbuf();
    std::string content = ss.str();
    while(content[i])
    {
        i = content.find(s1, i);
        if(i < 0)  
        {
            temp += content.substr(key, (content.length()-key));
            break;
        }
        temp += content.substr(key,i-key);
        temp += s2;
        i += s1.length();
        key = i;
    }
    filereplace << temp;
    file.close();
    filereplace.close();
}