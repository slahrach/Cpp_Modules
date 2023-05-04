/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:02:49 by slahrach          #+#    #+#             */
/*   Updated: 2022/06/02 07:27:00 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private :
		std::string	_name;
	public :
		Zombie(void);
		~Zombie();
		void announce( void );
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);