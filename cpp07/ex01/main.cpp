#include "iter.hpp"

template <typename T>
T	add_10(T n)
{
	return(n + 10);
}

int main()
{
	try
	{
	int	*arr = new int[3];
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 70;
		iter<int>(arr, -1, add_10);
		std::cout << arr[0] << std::endl;
		std::cout << arr[2] << std::endl;
		delete [] arr;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}