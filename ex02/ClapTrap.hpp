/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 08:26:05 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 10:55:57 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP

	#include <iostream>
	#include <string>

	class ClapTrap
	{
	protected:
		std::string		name;
		unsigned int	hp;
		unsigned int	energy;
		unsigned int	ad;
	public:
						ClapTrap();
						ClapTrap(const ClapTrap &newTrap);
						ClapTrap(std::string newName);
						ClapTrap(std::string newName, unsigned int newAd);
						~ClapTrap();
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap		&operator=(ClapTrap const &trap);
	};
#endif
