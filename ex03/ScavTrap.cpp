/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:30:29 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 19:54:01 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->hit_points = object.hit_points;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &object) {
	if (this != &object) {
		this->hit_points = object.hit_points;
		this->energy_points = object.energy_points;
		this->attack_damage = object.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->hit_points == 0 || this->energy_points == 0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage!"
		<< std::endl;
	(this->energy_points)--;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in guard keeper mode."
		<< std::endl;
}