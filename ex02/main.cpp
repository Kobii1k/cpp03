/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:53:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:28:37 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap        one("one", 5);
	ClapTrap        two("two", 14);
	FragTrap		three("three", 5);

	one.attack("two");
	two.takeDamage(5);
	two.beRepaired(3);
	one.guardGate();
	one.attack("two");
	two.takeDamage(5);
	two.attack("one");
	one.takeDamage(14);
	three.attack("one");
	one.takeDamage(5);
	three.highFivesGuys();
	one.beRepaired(5);
	three.attack("two");
	two.takeDamage(5);
	three.highFivesGuys();
}
