/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:52:23 by slahrach          #+#    #+#             */
/*   Updated: 2022/09/15 10:06:25 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
 #define CONTACT_H
 #include <iostream>
 #include <iomanip>
class Contact {
	public :
		std::string	checklen(std::string str);
		void		printContact(int i);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
		void		setFirstName(std::string name);
		void		setLastName(std::string last);
		void		setNickName(std::string nick);
		void		setPhoneNumber(std::string number);
		void		setDarkestSecret(std::string secret);

	private :
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};
#endif