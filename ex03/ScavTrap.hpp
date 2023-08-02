/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:30:40 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 20:21:09 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H

#define SCAVTRAP_H

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &object);
		ScavTrap	&operator=(const ScavTrap &object);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif