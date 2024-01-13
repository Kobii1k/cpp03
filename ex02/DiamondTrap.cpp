/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:21:48 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:09:43 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	name = "<foo>";
	ClapTrap::name = "<foo>_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->ad = FragTrap::ad;
	std::cout << "[DiamondTrap] " << name << ": Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName)
{
	name = newName;
	ClapTrap::name = newName + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->ad = FragTrap::ad;
	std::cout << "[DiamondTrap] " << name << ": Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName, unsigned int newAd)
{
	name = newName;
	ClapTrap::name = newName + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->ad = newAd;
	std::cout << "[DiamondTrap] " << name << ": Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap] " << name << ": Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << name << std::endl;
}

