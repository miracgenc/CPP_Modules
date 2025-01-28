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
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);