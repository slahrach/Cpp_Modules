/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 02:15:02 by slahrach          #+#    #+#             */
/*   Updated: 2022/09/15 10:05:48 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void	Contact::setFirstName(std::string first)
{
	this->_firstName = first;
}

void	Contact::setLastName(std::string last)
{
	this->_lastName = last;
}

void	Contact::setNickName(std::string nick)
{
	this->_nickname = nick;
}

void	Contact::setPhoneNumber(std::string number)
{
	this->_phoneNumber = number;
}

void	Contact::setDarkestSecret(std::string secret)
{
	this->_darkestSecret = secret;
}

std::string	Contact::checklen(std::string str)
{
	std::string	ret;

	ret = str;
	if (ret.length() > 10)
	{
		ret.erase(ret.begin() + 9, ret.end()); 
		ret.push_back('.');
	}
	return (ret);
}

void	Contact::printContact(int i)
{
	std::cout << std::left <<  std::setw(10) << i + 1 << " | ";
	std::cout << std::left <<  std::setw(10) << this->checklen(this->_firstName) << " | ";
	std::cout << std::left <<  std::setw(10)<< this->checklen(this->_lastName) << " | ";
	std::cout << std::left <<  std::setw(10) << this->checklen(this->_nickname) << std::endl;
}