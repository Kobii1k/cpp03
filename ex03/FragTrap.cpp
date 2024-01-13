/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:06:47 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:31:00 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	name = "<foo>";
	hp = 100;
	energy = 100;
	ad = 30;
	std::cout << "[FragTrap] " << name << ": Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName)
{
	name = newName;
	hp = 100;
	energy = 100;
	ad = 30;
	std::cout << "[FragTrap] " << name << ": Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName, unsigned int newAd)
{
	name = newName;
	hp = 100;
	energy = 100;
	ad = newAd;
	std::cout << "[FragTrap] " << name << ": Constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] " << name << ": Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << name << ": wanna High five ? let's do it ! 👏" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &trap)
{
	this->ad = trap.ad;
	this->energy = trap.energy;
	this->hp = trap.hp;
	this->name = trap.name;
	return (*this);
}

