/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:17:16 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 20:36:08 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ScavTrap(name), FragTrap(name), ClapTrap(name) {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) : ScavTrap(name), FragTrap(name), ClapTrap(name) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->hit_points = object.hit_points;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &object) {
	if (this != &object) {
		this->hit_points = object.hit_points;
		this->energy_points = object.energy_points;
		this->attack_damage = object.attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}