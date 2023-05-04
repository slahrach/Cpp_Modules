/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:24:08 by slahrach          #+#    #+#             */
/*   Updated: 2022/09/15 06:36:35 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int			i;
	std::string	str;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		str = argv[i];
		for (std::string::iterator it=str.begin(); it!=str.end(); it++)
			*it = toupper(*it);
		std::cout << str;
		if (i < argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
