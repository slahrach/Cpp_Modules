#include <iostream>

template <typename T>
void	iter(T *arr, int len, T (*func)(T))
{
	int	i = 0;

	while (i < len)
	{
		arr[i] = func(arr[i]);
		i++;
	}
}

