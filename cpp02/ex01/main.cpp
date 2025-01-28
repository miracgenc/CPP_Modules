#include <iostream>
#include "Fixed.hpp"

int main( void ) {  

    Fixed c( 42.42f );
    std::cout << c.getRawBits() << std::endl;
    std::cout << c.toInt() << std::endl;
    std::cout << c << std::endl;
    Fixed n(99);

    c.setRawBits(64536);
    n.setRawBits(12456);

    std::cout << c.toFloat() << std::endl;
    std::cout << c.toInt() << std::endl;
    std::cout << n.toFloat() << std::endl;
    std::cout << n.toInt() << std::endl;
    
    return 0;
}