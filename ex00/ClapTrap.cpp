/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:04:48 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called\n";	
}

ClapTrap::ClapTrap(const ClapTrap& x)
{
	std::cout << "Copy constructor called\n";	
	*this = x;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& x)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &x)
		ClapTrap(x._name);
	return (*this);	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called\n";	
}

ClapTrap::ClapTrap(const std::string str)
{
	std::cout << "Constructor called\n";
	_name = str;
	_hitpoints = 10;
	_energypoints = 10;
	_damagepoints = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energypoints < 0 || _hitpoints < 0)
		std::cout << _name << "can't do anything\n";
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damagepoints << " points of damage!\n";
		_energypoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energypoints - amount < 0 || _hitpoints  - amount < 0)
	{
		std::cout << "Out of range\n";
		_hitpoints = 0;
	}
	else
	{
		_hitpoints -= amount;
	}
	std::cout << _name << " takes " << amount << " damages.\n";
	std::cout << "Hitpoints is " << _hitpoints << "\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoints < 0 || _hitpoints < 0)
		std::cout << _name << "can't do anything\n";
	else if (_energypoints + amount > UINT_MAX || _hitpoints + amount > UINT_MAX)
		std::cout << "Out of range\n";
	else
	{
		_energypoints -= 1;
		_hitpoints += amount;
		std::cout << _name << " is repaired " << amount << " points.\n";
		std::cout << "Energypoints is " << _energypoints << "\n";
		std::cout << "Hitpoints is " << _hitpoints << "\n";
	}
}
