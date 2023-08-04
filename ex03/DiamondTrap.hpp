/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:16:49 by orakib            #+#    #+#             */
/*   Updated: 2023/08/03 16:59:04 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H

#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	name;
	public:
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &object);
		DiamondTrap	&operator=(const DiamondTrap &object);
		~DiamondTrap();
		using	ScavTrap::attack;
		void	whoAmI();
};

#endif