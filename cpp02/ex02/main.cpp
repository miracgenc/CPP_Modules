#include <iostream>
#include "Fixed.hpp"

#include <iostream>
 int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << b.getRawBits() << std::endl;
    std::cout << b.toInt() << std::endl;
    std::cout << b.toFloat() << std::endl;
    a.setRawBits(5000);
    std::cout << a.getRawBits() << std::endl;

    std::cout << Fixed::max(a,b) << std::endl;
    std::cout << Fixed::min(a,b) << std::endl;

    std::cout << a << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << a.getRawBits() << std::endl;
    return 0;
}