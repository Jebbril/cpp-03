/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:40 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 18:28:47 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	
	ClapTrap	bob("bob");
	ClapTrap	james("james");
	ClapTrap	erik("erik");
	
	bob.attack("james");
	james.takeDamage(5);
	erik.beRepaired(1);
}