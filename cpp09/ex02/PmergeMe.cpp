/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:46:03 by slahrach          #+#    #+#             */
/*   Updated: 2023/03/22 16:37:21 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
PmergeMe::PmergeMe(char*elem[])
{
    FillVector(elem);
    FillDeque();
}
PmergeMe::~PmergeMe() {}
void PmergeMe::FillVector(char*elem[])
{
    int i = 1;
    while(elem[i])
    {
        std::string str = elem[i];
        std::istringstream iss(str);
        std::string n;
        while (getline(iss, n, ' '))
        {
            std::stringstream conv(n);
            int num;
            conv >> num;
            if (num < 0 || (num == 0 && n != "0"))
                throw std::runtime_error("invalid input");
            unsorted_v.push_back(num);
        }
        i++;
    }
}

void PmergeMe::FillDeque()
{
   unsorted_d.assign(unsorted_v.begin(), unsorted_v.end());
}

void PmergeMe::mergeV(int left, int mid, int right)
{
    std::vector<int> tmp(size() + 1);

    tmp.assign(unsorted_v.begin(), unsorted_v.end());
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (tmp[i] <= tmp[j])
            unsorted_v[k++] = tmp[i++];
        else
            unsorted_v[k++] = tmp[j++];
    }
    while (i <= mid)
        unsorted_v[k++] = tmp[i++];
    while(j <= right)
        unsorted_v[k++] = tmp[j++];
}
void PmergeMe::insertV()
{
    for (size_t i = 1; i < size(); i++) {
    int key = unsorted_v[i];
    int j = i - 1;
    while (j >= 0 && unsorted_v[j] > key) {
        unsorted_v[j + 1] = unsorted_v[j];
        j--;
    }
    unsorted_v[j + 1] = key;
}

}
void PmergeMe::SortVector(int left, int right)
{
    if (left>= right) return;
    int mid = (left + right)/2;
    SortVector(left, mid);
    SortVector(mid + 1, right);
    mergeV(left, mid, right);
    insertV();
}

void PmergeMe::mergeD(int left, int mid, int right)
{
    std::vector<int> tmp(size() + 1);

    tmp.assign(unsorted_d.begin(), unsorted_d.end());
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (tmp[i] <= tmp[j])
            unsorted_d[k++] = tmp[i++];
        else
            unsorted_d[k++] = tmp[j++];
    }
    while (i <= mid)
        unsorted_d[k++] = tmp[i++];
    while(j <= right)
        unsorted_d[k++] = tmp[j++];
}
void PmergeMe::insertD()
{
    for (size_t i = 1; i < size(); i++) {
    int key = unsorted_d[i];
    int j = i - 1;
    while (j >= 0 && unsorted_d[j] > key) {
        unsorted_d[j + 1] = unsorted_d[j];
        j--;
    }
    unsorted_d[j + 1] = key;
}

}
void PmergeMe::SortDeque(int left, int right)
{
    if (left>= right) return;
    int mid = (left + right)/2;
    SortDeque(left, mid);
    SortDeque(mid + 1, right);
    mergeD(left, mid, right);
    insertD();
}


size_t PmergeMe::size()
{
    return unsorted_d.size();
}

void PmergeMe::printVector(const std::string& message)
{
    std::cout << message;
    for(std::vector<int>::iterator it1 = unsorted_v.begin(); it1 < unsorted_v.end(); it1++)
        std::cout << " " << *it1 << " ";
    std::cout << std::endl;
}

double PmergeMe::SortCount(const std::string& container)
{
    clock_t start_time = std::clock();
    if (container == "Vector")
        SortVector(0, size() - 1);
    else
        SortDeque(0, size() - 1);
    clock_t end_time = clock();
    double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    time_spent *= 1e6;
    return (time_spent);
}
void PmergeMe::print()
{
    printVector("Before:");
    double count = SortCount("Vector");
    printVector("After :");
    std::cout << "Time to process range of " << size() << " elements with std::Vector is " << count << " us " << std::endl;
    std::cout << "Time to process range of " << size() << " elements with std::Deque is " << SortCount("Deque") << " us " << std::endl;
}
