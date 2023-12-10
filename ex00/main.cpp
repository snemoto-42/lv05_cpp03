/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 12:48:31 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap c1("nemoto");

	c1.attack("A");

	c1.takeDamage(1);
	c1.beRepaired(1);

	c1.takeDamage(8);
	c1.beRepaired(1);

	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(1);
	c1.beRepaired(50);

	c1.takeDamage(100);
	c1.beRepaired(1);

	return 0;
}
