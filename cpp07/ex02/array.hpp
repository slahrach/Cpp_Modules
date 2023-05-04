#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
	private :
		unsigned int	n;
		T				*array;
	public :
		Array(void)
		{
			this->n = 0;
			this->array = new T();
			*(this->array) = 0;
		}
		Array(unsigned int n)
		{
			this->n = n;
			this->array = new T[n];
			unsigned int i = 0;
			while (i < n)
			{
				this->array[i] = 0;
				i++;
			}
		}
		Array& operator=(Array& obj)
		{
			unsigned int	i = 0;
			delete [] this->array;
			this->n = obj.size();
			this->array = new T[this->n];
			while (i < this->n)
			{
				this->array[i] = obj[i];
				i++;
			}
			return (*this);
		}
		Array(Array& copy)
		{
			this->array = new T();
			*this = copy;
		}
		~Array(void)
		{
			delete [] this->array;
		}
		T& operator[](int n)
		{
			try
			{
				if (n < 0 || static_cast<unsigned int>(n) >= this->n)
					throw std::exception();
			}
			catch (std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			return (this->array[n]);
		}
		unsigned int size(void) const
		{
			return (this->n);
		}
};
#endif