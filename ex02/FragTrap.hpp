/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:05:17 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAG_TRAP_HPP__
#define __FRAG_TRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap( void );
		FragTrap( const FragTrap& );
		FragTrap& operator=( const FragTrap& );
		virtual ~FragTrap( void );

		FragTrap( const std::string );

		virtual void	attack( const std::string& );
		void	highFivesGuys( void );

};

#endif /* __FRAG_TRAP_HPP__ */
