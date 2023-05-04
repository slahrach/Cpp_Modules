/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:55:04 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/18 16:08:38 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
int main(int argc, char*argv[])
{
    try
    {
        if (argc < 2)
            throw std::runtime_error("Wrong number of arguments");
        PmergeMe sort(argv);
        sort.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}