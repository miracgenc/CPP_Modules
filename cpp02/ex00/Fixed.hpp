#include <iostream> 

class Fixed
{
    private:
        int fixednbr;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed &operator =(const Fixed &Fixed);
};