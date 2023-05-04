/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:59:57 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/17 16:41:34 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int argc, char*argv[])
{
    try
    {
        if (argc != 2)
            std::cerr << "Wrong Number of arguments" << std::endl;
        else
        {
            std::string input = argv[1];
            RPN process;
            std::cout << process.calculate(input) << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}