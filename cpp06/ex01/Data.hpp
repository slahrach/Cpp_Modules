#ifndef DATA_HPP
# define DATA_HPP
# include <stdint.h>
# include <iostream>

struct	Data
{
	int	d;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif