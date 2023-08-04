/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:40 by orakib            #+#    #+#             */
/*   Updated: 2023/08/03 16:28:34 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	
	ClapTrap	bob("bob");
	ScavTrap	james("james");
	FragTrap	erik("erik");
	DiamondTrap	frank("frank");
	std::cout << std::endl;
	
	bob.attack("james");
	bob.takeDamage(4);
	bob.beRepaired(5);
	std::cout << std::endl;
	
	james.attack("frank");
	james.takeDamage(4);
	james.beRepaired(5);
	james.guardGate();
	std::cout << std::endl;
	
	erik.attack("bob");
	erik.takeDamage(4);
	erik.beRepaired(5);
	erik.highFivesGuys();
	std::cout << std::endl;
	
	frank.attack("james");
	frank.takeDamage(4);
	frank.beRepaired(5);
	frank.guardGate();
	frank.highFivesGuys();
	frank.whoAmI();
	std::cout << std::endl;
}