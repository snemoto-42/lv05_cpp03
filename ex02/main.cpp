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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "--- ex00 ---\n";	
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
	}
	{
		std::cout << "--- test 3 ---\n";

		ClapTrap c1("ct1");

		c1.beRepaired(UINT_MAX);
		c1.beRepaired(1);
	}
	std::cout << "--- ex01 ---\n";	
	{
		std::cout << "--- test 1 ---\n";

		ScavTrap c1("ct1");

		c1.attack("enemy");

		c1.takeDamage(1);
		c1.beRepaired(1);

		c1.takeDamage(8);
		c1.beRepaired(1);

		for (unsigned int i = 0; i < 48; i++)
			c1.beRepaired(1);
		c1.beRepaired(50);

		c1.beRepaired(1);
		c1.takeDamage(100);
		c1.takeDamage(1);
		c1.attack("enemy");
	}
	{
		std::cout << "--- test 2 ---\n";

		ScavTrap c1("ct1");

		c1.takeDamage(100);
		c1.beRepaired(1);
	}
	{
		std::cout << "--- test 3 ---\n";

		ScavTrap c1("ct1");

		c1.beRepaired(UINT_MAX);
		c1.beRepaired(1);
	}
	std::cout << "--- ex02 ---\n";	
	{
		std::cout << "--- test 1 ---\n";

		FragTrap c1("ct1");

		c1.attack("enemy");

		c1.takeDamage(1);
		c1.beRepaired(1);

		c1.takeDamage(8);
		c1.beRepaired(1);

		for (unsigned int i = 0; i < 98; i++)
			c1.beRepaired(1);
		c1.beRepaired(50);

		c1.beRepaired(1);
		c1.takeDamage(100);
		c1.takeDamage(1);
		c1.attack("enemy");
	}
	{
		std::cout << "--- test 2 ---\n";

		FragTrap c1("ct1");

		c1.takeDamage(100);
		c1.beRepaired(1);
	}
	{
		std::cout << "--- test 3 ---\n";

		FragTrap c1("ct1");

		c1.beRepaired(UINT_MAX);
		c1.beRepaired(1);
	}
	return 0;
}
