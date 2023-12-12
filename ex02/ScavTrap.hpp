/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/12 17:27:11 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap& );
		virtual ~ScavTrap( void );

		ScavTrap( const std::string& );

		virtual void	attack( const std::string& );
		void	guardGate ( void );

};

#endif /* __SCAV_TRAP_HPP__ */
