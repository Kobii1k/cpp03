/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 08:25:57 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:11:55 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "<foo>";
	hp = 10;
	energy = 10;
	ad = 0;
	std::cout << "[ClapTrap] " << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	name = newName;
	hp = 10;
	energy = 10;
	ad = 0;
	std::cout << "[ClapTrap] " << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName, unsigned int newAd)
{
	name = newName;
	hp = 10;
	energy = 10;
	ad = newAd;
	std::cout << "[ClapTrap] " << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &newTrap)
{
	*this = newTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << name << ": Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (hp > 0)
	{
		if (energy > 0)
		{
			energy--;
			std::cout << name << " try to attack " << target << ", causing " << ad << " DAMAGE!" << std::endl;
		}
		else
			std::cout << name << " doesn't have enough ENERGY to attack" << std::endl;
	}
	else
		std::cout << name << " is already dead..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > 0)
	{
		if (amount > hp)
			hp = 0;
		else
			hp = hp - amount;
		std::cout << name << " takes " << amount << " DAMAGE, he now has " << hp << " HP!" << std::endl;
	}
	else
		std::cout << name << " is already dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp > 0)
	{
		if (energy > 0)
		{
			energy--;
			hp = hp + amount;
			std::cout << name << " recovers " << amount << " HP back, he now has " << hp << " HP!" << std::endl;
		}
		else
			std::cout << name << " doesn't have enough ENERGY to recover" << std::endl;
	}
	else
		std::cout << name << " is already dead..." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &trap)
{
	this->ad = trap.ad;
	this->energy = trap.energy;
	this->hp = trap.hp;
	this->name = trap.name;
	return (*this);
}
