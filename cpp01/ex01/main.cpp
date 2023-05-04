/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:11:25 by slahrach          #+#    #+#             */
/*   Updated: 2022/06/02 07:31:23 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int	n = 9;
	int	i = 0;
	Zombie	*tab = NULL;
	tab = zombieHorde(n, "Gruz");
	while (i < n)
	{
		tab[i].announce();
		i++;
	}
	delete[] tab;
}