/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:18:08 by slahrach          #+#    #+#             */
/*   Updated: 2022/08/13 00:50:31 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string _name;
			Weapon *_weapon;
	public :
			HumanB(std::string name);
			void	attack(void);
			void	setWeapon(Weapon& weap);
};