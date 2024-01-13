/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:23:50 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:34:45 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP

	#include "ClapTrap.hpp"

	class ScavTrap : virtual public ClapTrap
	{
	public:
					ScavTrap(void);
					ScavTrap(std::string newName);
					ScavTrap(std::string newName, unsigned int newAd);
					~ScavTrap(void);
		void		guardGate(void);
		ScavTrap	&operator=(ScavTrap const &trap);
	};
#endif
