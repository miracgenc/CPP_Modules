#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixednbr = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member fuction called" << std::endl;
    return(this->fixednbr);
}

void Fixed::setRawBits(int const raw)
{
    this->fixednbr = raw;
    std::cout << "setRawBits member fuction called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->fixednbr = fixed.getRawBits();
    return *this;
}