/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:40 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 20:08:05 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	
	FragTrap	bob("bob");
	FragTrap	james("james");
	FragTrap	erik("erik");
	
	bob.attack("james");
	james.takeDamage(5);
	erik.beRepaired(1);
	erik.highFivesGuys();
}