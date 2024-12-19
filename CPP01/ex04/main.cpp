#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of parameters" << std::endl;
        return 0;
    }
    int i = 0, key = 0;
    std::string filename, s1, s2, content, replace, line, temp;
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    std::ifstream file(filename.c_str());
    replace = filename + ".replace";
    std::ofstream filereplace(replace.c_str());
    if(!file || !filereplace)
    {
        std::cout << "Cannot open the file" << std::endl;
        return 0;
    }
    while(std::getline(file, line)) 
    {
        content += line + "\n";
    }
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

