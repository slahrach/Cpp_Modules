/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:18:11 by slahrach          #+#    #+#             */
/*   Updated: 2022/08/13 00:35:26 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private :
			std::string _name;
			Weapon&	_weapon;
	public :
		HumanA(std::string name, Weapon& weap);
		void	attack(void);
};