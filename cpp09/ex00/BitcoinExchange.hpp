/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:31:44 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/21 22:27:22 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <map>
# include <string>
# include <fstream>
#include <sstream>
#include <cstdlib>
#include <exception>

class BitcoinExchange
{
private:
	std::map<std::string, double> db;
public:
	BitcoinExchange(std::string& input);
	~BitcoinExchange();
	void CvsData();
	void	BitcoinResult(std::string& input);
	bool	CheckValidDate(std::string& date);
	bool	CheckValidValue(double value, std::string& str_value);
	void	SearchOutput(std::string& date, double value);
};


#endif