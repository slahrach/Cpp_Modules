/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:29:38 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/21 18:59:47 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
int main(int argc, char*argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error : input file required" << std::endl;
        return 1;
    }
    std::string input = argv[1];
    BitcoinExchange b(input);
}