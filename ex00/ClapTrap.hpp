/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:04:51 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAP_TRAP_HPP__
#define __CLAP_TRAP_HPP__

#include <iostream>
#include <limits.h>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( const ClapTrap& );
		ClapTrap& operator=( const ClapTrap& );
		~ClapTrap( void );

		ClapTrap( const std::string );

		void	attack( const std::string& );
		void	takeDamage( unsigned int );
		void	beRepaired( unsigned int );

	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_damagepoints;

};

#endif /* __CLAP_TRAP_HPP__ */
