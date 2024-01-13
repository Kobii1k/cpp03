/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:23:48 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:31:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	name = "<foo>";
	hp = 100;
	energy = 50;
	ad = 20;
	std::cout << "[ScavTrap] " << name << ": Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
{
	name = newName;
	hp = 100;
	energy = 50;
	ad = 20;
	std::cout << "[ScavTrap] " << name << ": Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName, unsigned int newAd)
{
	name = newName;
	hp = 100;
	energy = 50;
	ad = newAd;
	std::cout << "[ScavTrap] " << name << ": Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] " << name << ": Destructor called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &trap)
{
	this->ad = trap.ad;
	this->energy = trap.energy;
	this->hp = trap.hp;
	this->name = trap.name;
	return (*this);
}
