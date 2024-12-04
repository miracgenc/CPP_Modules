#include <iostream>

int main(int argc, char **argv)
{
    int i = 0, k = 0;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
    while(argv[++i] != NULL)
    {
        while(argv[i][k] != '\0')
            std::cout << (char)std::toupper(*argv[i]++);
        std::cout << " ";   
    }
    std::cout << std::endl;
}