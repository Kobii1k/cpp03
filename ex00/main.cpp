/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:53:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 08:43:56 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap        Jack("Handsome", 3);
	ClapTrap        sangoku("sangoku", 4);

	Jack.attack("sangoku");
	sangoku.takeDamage(3);
	sangoku.beRepaired(3);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	Jack.beRepaired(2);
	Jack.attack("sangoku");
	sangoku.takeDamage(3);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.attack("Handsome");
	Jack.takeDamage(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	sangoku.beRepaired(4);
	Jack.beRepaired(4);
	return 0;
}
