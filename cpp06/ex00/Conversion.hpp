#ifndef CONVERSION_HPP
# define CONVERSION_HPP
# include <iostream>
# include <string>
# include <limits>
# include <cmath>
class Conversion
{
	private:
	std::string	_str;
	public :
	class ImpossibleException : public std::exception
	{
		public :
		const char* what() const throw();
	};
	class NonDisplaybleException: public std::exception
	{
		public :
		const char* what() const throw();
	};
	Conversion(void);
	Conversion(std::string str);
	~Conversion(void);
	Conversion(Conversion &copy);
	Conversion& operator=(Conversion& obj);
	std::string	getStr(void) const;
	double	toDouble(std::string str);
	int		toInt(double d);
	float	tofloat(double d);
	char	toChar(double d);
};

std::ostream& operator<<(std::ostream& o, Conversion& obj);
#endif