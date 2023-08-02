/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:40 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 19:55:04 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	
	ScavTrap	bob("bob");
	ScavTrap	james("james");
	ScavTrap	erik("erik");
	
	bob.attack("james");
	james.takeDamage(5);
	erik.beRepaired(1);
	erik.guardGate();
}