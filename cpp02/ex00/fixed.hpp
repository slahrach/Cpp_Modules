#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(Fixed & copy);
		~Fixed(void);
		Fixed& operator=(Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private :
		int					_FixedValue;
		static const int	_NbfractB;
};
#endif