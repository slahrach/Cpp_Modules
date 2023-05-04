/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:40:00 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/22 16:54:53 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string& input) {
	CvsData();
	BitcoinResult(input);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::CvsData()
{
	std::ifstream data("data.csv");
	std::string line;

	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::stringstream l(line);
		std::string	date;
		double rate;
		std::getline(l, date, ',');
		l >> rate;
		db[date] = rate;
	}
	data.close();
}
void BitcoinExchange::SearchOutput(std::string& date, double value)
{
	std::map<std::string, double>::iterator it = db.upper_bound(date);
	if (it != db.begin())
		it--;
	std::cout << date  << " => "<< value <<  " = "<< (it->second * value) << std::endl;
}

void BitcoinExchange::BitcoinResult(std::string& input)
{
	std::ifstream in(input);
	std::string line;
	if (!in.is_open() || !std::getline(in, line) || line != "date | value")
	{
		std::cerr << "Error: input file problem" << std::endl;
		exit(0);
	}
	while (std::getline(in, line))
	{
		std::size_t found = line.find(" | ", 0);
		if (found != std::string::npos)
		{
			std::string date = line.substr(0, found);
			if (CheckValidDate(date))
			{
				std::string str = line.substr(found + 3);
				std::stringstream v(str);
				double value;
				v >> value;
				if (CheckValidValue(value, str))
					SearchOutput(date, value);
			}
		}
		else
			std::cerr << "Error : bad input => " << line << std::endl;
	}
}

bool makeError(std::string& error)
{
	std::cerr << "Error : Bad input => " << error << std::endl;
	return (0);
}
bool BitcoinExchange::CheckValidDate(std::string& date)
{
	bool ret = 1;
	try
	{
		size_t f = date.find("-", 0);
		if (f == std::string::npos)
			throw std::runtime_error("error");
		std::stringstream y(date.substr(0, f));
		int	year;
		y >> year;
		if (year < 2009 || year > 2022)
			throw std::runtime_error("error");
		size_t n = date.find("-", f + 1);
		if (n == std::string::npos)
			throw std::runtime_error("error");
		std::string s = date.substr(f + 1, n - (f + 1));
		if (s.size() != 2)
			throw std::runtime_error("error");
		std::stringstream m(s);
		int month;
		m >> month;
		if (month < 0 && month > 12)
			throw std::runtime_error("error");
		s = date.substr(n + 1);
		if (s.size() != 2)
			throw std::runtime_error("error");
		std::stringstream d(s);
		int day;
		d >> day;
		int list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
			list[2] = 29;
		if (day < 0 || day > list[month - 1] || (year == 2009 && month == 1 && day < 2))
			throw std::runtime_error("error");
	}
	catch(const std::exception& e)
	{
		ret = makeError(date);
	}
	return (ret);
}

bool BitcoinExchange::CheckValidValue(double value, std::string& str_value)
{
	std::string message;
	if (value < 0)
		message = "Not a positive Number";
	else if (value > 1000)
		message = "Too Large Number";
	else if (value == 0 && str_value != "0")
		message = "Not a Valid Number";
	else
		return (1);
	return (makeError(message));
}