/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:58:58 by slahrach          #+#    #+#             */
/*   Updated: 2022/06/02 09:12:49 by slahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>

class Weapon
{
	private :
			std::string	_type;
	public :
			Weapon(std::string typeInit);
			std::string	const &getType() const;
			void	setType(std::string newType);
};