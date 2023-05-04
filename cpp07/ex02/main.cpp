#include "Array.hpp"

int main()
{
	try
	{
		Array <int> arr(2);
		arr[0] = 7;
		arr[1] = 9;
		Array <int> array(arr);
		int a = arr.size();
		std::cout << a << std::endl;
		std::cout << arr[0] << std::endl;
		std::cout << array[0] << std::endl;
		arr[0] = 8;
		std::cout << array[0] << std::endl;
		std::cout << arr[0] << std::endl;
		array[0] = 9;
		std::cout << arr[0] << std::endl;
		array[6] = 9;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}