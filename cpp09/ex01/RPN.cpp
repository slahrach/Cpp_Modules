/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:59:48 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/21 16:42:54 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
int RPN::calculate(std::string input)
{
    std::stringstream in(input);
    std::string line;
    int result;
    while (std::getline(in, line, ' '))
    {
        if (line.size() != 1)
            throw std::runtime_error("Error");
        if (std::isdigit(line[0]))
            operands.push(line[0] - '0');
        else
        {
            if (operands.size() != 2)
                throw std::runtime_error("Error");
            int a = operands.top();
            operands.pop();
            int b = operands.top();
            operands.pop();
            switch (line[0])
            {
            case '+':
                result = b + a;
                break;
            case '-':
                result = b - a;
                break;
            case '*':
                result = b * a;
                break;
            case '/':
                result = b / a;
                break;
            default:
                throw std::runtime_error("Error");
            }
            operands.push(result);
        }
    }
    if (operands.size() != 1)
        throw std::runtime_error("Error");
    return (operands.top());
}

RPN::~RPN()
{
}