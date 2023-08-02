/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:01:26 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 20:21:24 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H

#define FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap {
	public:
		FragTrap(const std::string name);
		FragTrap(const FragTrap &object);
		FragTrap	&operator=(const FragTrap &object);
		~FragTrap();
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif