#include <iostream> 

class Fixed
{
    private:
        int fixednbr;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int nbr);
        Fixed(const float fnbr);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator =(const Fixed &Fixed);
        Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
        bool operator >(const Fixed &other) const;
        bool operator <(const Fixed &other) const;
        bool operator >=(const Fixed &other) const;
        bool operator <=(const Fixed &other) const;
        bool operator ==(const Fixed &other) const;
        bool operator !=(const Fixed &other) const;
        Fixed operator +(const Fixed &other) const; 
        Fixed operator -(const Fixed &other) const; 
        Fixed operator *(const Fixed &other) const;
        Fixed operator /(const Fixed &other) const;
        static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);