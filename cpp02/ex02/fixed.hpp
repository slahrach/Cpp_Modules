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
		Fixed  operator++(void);
		Fixed  operator++(int);
		Fixed  operator--(void);
		Fixed  operator--(int);
		Fixed&	operator = (Fixed const &obj);
		Fixed	operator +(Fixed f) const;
		Fixed	operator -(Fixed f) const;
		Fixed	operator /(Fixed f) const;
		Fixed	operator * (Fixed f) const;
		bool operator < (Fixed f) const;
		bool operator <= (Fixed f) const;
		bool operator > (Fixed f) const;
		bool operator >= (Fixed f) const;
		bool operator == (Fixed f) const;
		bool operator != (Fixed f) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static Fixed const  &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed const &f1, Fixed const &f2);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private :
		int					_FixedValue;
		static const int	_NbfractB;

};

std::ostream& operator << (std::ostream& out, Fixed const & f);