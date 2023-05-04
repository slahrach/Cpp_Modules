/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:45:58 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/18 16:00:56 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <list>
# include <stdexcept>
# include <iostream>
#include <string>
#include <sstream>
# include <algorithm>
# include <ctime>
class PmergeMe
{
private:
    std::vector<int> unsorted_v;
    std::deque<int> unsorted_d;
public:
    PmergeMe(char*elem[]);
    ~PmergeMe();
    void FillVector(char*elem[]);
    void FillDeque();
    void printVector(const std::string& message);
    size_t size();
    void SortVector(int left, int right);
    void mergeV(int left, int mid, int right);
    void insertV();
    void SortDeque(int left, int right);
    void mergeD(int left, int mid, int right);
    void insertD();
    void print();
    double SortCount(const std::string& container);
};

#endif
