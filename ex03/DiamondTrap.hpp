/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:21:50 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:41:12 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP

	#include "ClapTrap.hpp"
	#include "ScavTrap.hpp"
	#include "FragTrap.hpp"

	class DiamondTrap : public ScavTrap, public FragTrap
	{
	private:
		std::string		name;
	public:
						DiamondTrap(void);
						DiamondTrap(std::string newName);
						DiamondTrap(std::string newName, unsigned int newAd);
						~DiamondTrap(void);
		void			attack(const std::string &target);
		void			whoAmI(void);
	};
#endif

