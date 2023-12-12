/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/12 17:32:31 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap : Default constructor called\n";	
}

ClapTrap::ClapTrap(const ClapTrap& x)
{
	std::cout << "ClapTrap : Copy constructor called\n";	
	*this = x;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& x)
{
	std::cout << "ClapTrap : Copy assignment operator called\n";
	if (this != &x)
		ClapTrap(x._name);
	return (*this);	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap : Destructor called\n";	
}

ClapTrap::ClapTrap(const std::string& str): _name(str), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap : Constructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energypoints < 1 || _hitpoints < 1)
		std::cout << _name << " can't do anything\n";
	else
	{
		_energypoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage! ";
		std::cout << _name << "'s energypoints is " << _energypoints << ".\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints - amount > 0)
	{
		_hitpoints -= amount;
	}
	else
	{
		_hitpoints = 0;
	}
	std::cout << _name << " takes " << amount << " damages. ";
	std::cout << _name << "'s hitpoints is " << _hitpoints << ".\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoints < 1 || _hitpoints < 1)
		std::cout << _name << " can't do anything\n";
	else if (_hitpoints >= (UINT_MAX - amount))
	{
		_energypoints -= 1;
		_hitpoints = UINT_MAX;
		std::cout << _name << " is repaired " << "MAX points. ";
		std::cout << _name << "'s hitpoints is " << _hitpoints << "(MAX points). ";
		std::cout << _name << "'s energypoints is " << _energypoints << ".\n";
	}
	else
	{
		_energypoints -= 1;
		_hitpoints += amount;
		std::cout << _name << " is repaired " << amount << " points. ";
		std::cout << _name << "'s hitpoints is " << _hitpoints << ". ";
		std::cout << _name << "'s energypoints is " << _energypoints << ".\n";
	}
}
