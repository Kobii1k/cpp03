/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:06:44 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/13 11:34:43 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP

	#include "ClapTrap.hpp"

	class FragTrap : virtual public ClapTrap
	{
	public:
					FragTrap(void);
					FragTrap(std::string newName);
					FragTrap(std::string newName, unsigned int newAd);
					~FragTrap(void);
		void    	highFivesGuys(void);
		FragTrap	&operator=(FragTrap const &trap);
	};
#endif
