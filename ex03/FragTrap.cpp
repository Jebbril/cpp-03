/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:01:14 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 20:08:29 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->hit_points = object.hit_points;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

FragTrap	&FragTrap::operator=(const FragTrap &object) {
	if (this != &object) {
		this->hit_points = object.hit_points;
		this->energy_points = object.energy_points;
		this->attack_damage = object.attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (this->hit_points == 0 || this->energy_points == 0)
		return ;
	std::cout << "FragTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage!"
		<< std::endl;
	(this->energy_points)--;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " is requesting positive high fives."
		<< std::endl;
}