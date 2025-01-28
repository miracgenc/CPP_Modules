#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int nbr)
{
    std::cout << "Integer constructor called" << std::endl;
    fixednbr = nbr*(1 << bits);
}

Fixed::Fixed(const float fnbr)
{
    std::cout << "Float constructor called" << std::endl;
    fixednbr = roundf(fnbr * ( 1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return(this->fixednbr);
}

void Fixed::setRawBits(int const raw)
{
    this->fixednbr = raw;
}

float Fixed::toFloat( void ) const
{
    return(((float) fixednbr) / (1 << bits));
}

int Fixed::toInt( void ) const
{
    return(this->fixednbr >> bits);
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assigment operator called" << std::endl; 
    this->fixednbr = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->fixednbr > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->fixednbr < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->fixednbr >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->fixednbr <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->fixednbr == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->fixednbr != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    else if(a == b)
        return a;
    else   
        return b;

}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
        return a;
    else if(a == b)
        return a;
    else   
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	    if (a < b)
        return a;
    else if(a == b)
        return a;
    else   
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
		if (a > b)
        return a;
    else if(a == b)
        return a;
    else   
        return b;

}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}
