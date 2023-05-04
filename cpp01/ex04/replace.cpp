#include "replace.hpp"

void replace (std::string file, std::string s1, std::string s2)
{
	std::size_t	l1;
	std::size_t	l;
	std::size_t f;
	std::string	file_r;
	std::string	line;

	l1 = s1.std::string::length();
	l = s2.std::string::length();
	file_r = file + ".replace";
	std::ifstream origin(file);
	if (origin.std::ifstream::is_open())
	{
		std::ofstream replace(file_r);
		if (replace.std::ofstream::is_open())
		{
			while (std::getline(origin, line))
			{
				f = -1;
				while (1)
				{
					f = line.std::string::find(s1, f + 1);
					if (f != std::string::npos)
					{
						line.std::string::erase(f, l1);
						line.std::string::insert(f, s2);
						f +=l ;
					}
					else
						break;
				}
				replace << line << std::endl;
			}
			replace.std::ofstream::close();
		}
		else
			std::cerr << "fail in opening output file" << std::endl;
		origin.std::ifstream::close();
	}
	else
		std::cerr << "fail in opening input file" << std::endl;
}