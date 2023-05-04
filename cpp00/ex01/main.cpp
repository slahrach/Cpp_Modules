/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:36:27 by slahrach          #+#    #+#             */
/*   Updated: 2022/08/09 04:06:23 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	int			i;
	int			j;
	PhoneBook	book;
	std::string	str;

	i = 0;
	while (1)
	{
		std::cout << "enter one of three commands : ADD, SEARCH, EXIT : ";
		std::getline (std::cin, str);
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "enter first name : ";
			std::getline (std::cin, book.first);
			std::cout << "enter last name : ";
			std::getline (std::cin, book.last);
			std::cout << "enter nickname : ";
			std::getline (std::cin, book.nick);
			std::cout << "enter phone number : ";
			std::getline (std::cin, book.phone);
			std::cout << "enter darkest secret : ";
			std::getline (std::cin, book.secret);
			if (!book.first.empty() && !book.last.empty() && !book.nick.empty() && !book.phone.empty() && !book.secret.empty())
			{
				book.contacts[i].setFirstName(book.first);
				book.contacts[i].setLastName(book.last);
				book.contacts[i].setNickName(book.nick);
				book.contacts[i].setPhoneNumber(book.phone);
				book.contacts[i].setDarkestSecret(book.secret);
				i++;
			}
		}
		else if (str == "SEARCH")
		{
			j = 0;
			while (j < 8 && !book.contacts[j].getFirstName().empty())
			{
				book.contacts[j].printContact(j);
				j++;
			}
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
}