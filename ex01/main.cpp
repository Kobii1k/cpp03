/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:53:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 10:04:16 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap        one("one", 5);
	ClapTrap        two("two", 14);

	one.attack("two");
	two.takeDamage(5);
	two.beRepaired(3);
	one.guardGate();
	one.attack("two");
	two.takeDamage(5);
	two.attack("one");
	one.takeDamage(14);
}
