/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:59:38 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/17 16:37:16 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <string>
# include <sstream>
# include <fstream>
# include <stdexcept>
# include <cctype>
class RPN
{
private:
    std::stack<int> operands;
public:
    RPN();
    int calculate(std::string input);
    ~RPN();
};
#endif