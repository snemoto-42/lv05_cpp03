/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:15 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap : Default constructor called\n";
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap& x)
{
	std::cout << "FragTrap : Copy constructor called\n";	
	*this = x;
}

FragTrap& FragTrap::operator=(const FragTrap& x)
{
	std::cout << "FragTrap : Copy assignment operator called\n";
	if (this != &x)
		FragTrap(x._name);
	return (*this);	
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap : Destructor called\n";	
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	std::cout << "FragTrap : Constructor called\n";
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energypoints < 1 || _hitpoints < 1)
		std::cout << _name << " can't do anything\n";
	else
	{
		_energypoints -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage! ";
		std::cout << _name << "'s energypoints is " << _energypoints << ".\n";
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap has positive high fives request.\n";
}
