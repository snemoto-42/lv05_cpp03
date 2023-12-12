/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/12 17:57:40 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "--- ClapTrap ---\n";	
	{
		std::cout << "--- test 1 ---\n";

		ClapTrap c1("ct1");

		c1.attack("enemy");

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

		c1.beRepaired(1);
		c1.takeDamage(100);
		c1.takeDamage(1);
		c1.attack("enemy");
	}
	{
		std::cout << "--- test 2 ---\n";

		ClapTrap c1("ct1");

		c1.takeDamage(10);
		c1.beRepaired(1);
		c1.attack("enemy");
	}
	{
		std::cout << "--- test 3 ---\n";

		ClapTrap c1("ct1");

		c1.beRepaired(UINT_MAX);
		c1.beRepaired(1);
		c1.takeDamage(100);
		c1.beRepaired(UINT_MAX);
	}
	return 0;
}
