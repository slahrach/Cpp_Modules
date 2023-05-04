/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:00:54 by slahrach          #+#    #+#             */
/*   Updated: 2022/09/15 10:03:32 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
 #define PHONEBOOK_H
 #include <iostream>
 #include <iomanip>

class PhoneBook {
	public :
		PhoneBook(void);
		~PhoneBook(void);
		Contact contacts[8];
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
};
#endif