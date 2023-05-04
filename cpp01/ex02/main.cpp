/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:37:11 by slahrach          #+#    #+#             */
/*   Updated: 2022/06/02 07:53:27 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The  address of str = " << &str << std::endl;
	std::cout << "Address held by ptr = " << stringPTR << std::endl;
	std::cout << "Address held by ref = " << &stringREF << std::endl;//references are always derefreced
	std::cout << std::endl;

	std::cout << "The value of str is : " << str << std::endl;
	std::cout << "Value pointed to by ptr is : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by ref is : " << stringREF << std::endl;
}