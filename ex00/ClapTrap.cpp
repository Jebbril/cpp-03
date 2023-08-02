/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:45:01 by orakib            #+#    #+#             */
/*   Updated: 2023/08/02 18:24:10 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : name(name) {
	std::cout << "Default constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &object) : name(object.name) {
	std::cout << "Copy constructor called" << std::endl;
	this->hit_points = object.hit_points;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &object) {
	if (this != &object) {
		this->hit_points = object.hit_points;
		this->energy_points = object.energy_points;
		this->attack_damage = object.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->hit_points == 0 || this->energy_points == 0)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage!"
		<< std::endl;
	(this->energy_points)--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_points == 0 || this->energy_points == 0)
		return ;
	std::cout << "ClapTrap " << this->name << " took " << amount
		<< " points of damage!"
		<< std::endl;
	if (this->hit_points >= amount)
		this->hit_points = this->hit_points - amount;
	else
		this->hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_points == 0 || this->energy_points == 0)
		return ;
	std::cout << "ClapTrap " << this->name << " is repairing himself for "
		<< amount << " points of health!"
		<< std::endl;
	(this->energy_points)--;
	this->hit_points += amount;
}