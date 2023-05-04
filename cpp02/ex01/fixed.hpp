#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int nbr);
		Fixed(const float n);
		Fixed(Fixed const & copy);
		~Fixed(void);
		Fixed& operator = (Fixed const &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private :
		int					_FixedValue;
		static const int	_NbfractB;
};

std::ostream& operator << (std::ostream& out, Fixed const & f);

#endif