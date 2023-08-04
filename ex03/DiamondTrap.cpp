/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:17:16 by orakib            #+#    #+#             */
/*   Updated: 2023/08/03 14:12:29 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) : ClapTrap(object.name), ScavTrap(object.name), FragTrap(object.name) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->name = object.name;
	this->ClapTrap::name = object.name + "_clap_name";
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

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << this->name << std::endl
		<< "ClapTrap name is " << ClapTrap::name << std::endl;
}