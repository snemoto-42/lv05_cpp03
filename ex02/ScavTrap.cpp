/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:05 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "ScavTrap : Default constructor called\n";
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& x)
{
	std::cout << "ScavTrap : Copy constructor called\n";	
	*this = x;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& x)
{
	std::cout << "ScavTrap : Copy assignment operator called\n";
	if (this != &x)
		ScavTrap(x._name);
	return (*this);	
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap : Destructor called\n";	
}

ScavTrap::ScavTrap(std::string str): ClapTrap(str)
{
	std::cout << "ScavTrap : Constructor called\n";
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energypoints < 1 || _hitpoints < 1)
		std::cout << _name << " can't do anything\n";
	else
	{
		_energypoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage! ";
		std::cout << _name << "'s energypoints is " << _energypoints << ".\n";
	}
}

void	ScavTrap::guardGate (void)
{
	std::cout << "ScavTrap is now in Gate keeper mmode.\n";
}
