/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:43:29 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 15:19:54 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>


class ClapTrap
{
    protected:
        std::string		_name;
        unsigned int	_hitPoints;
        unsigned int	_energyPoints;
        unsigned int	_attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &trap);
        ~ClapTrap();
        ClapTrap        &operator=(const ClapTrap &trap);
        virtual void    attack(std::string const &target);
        void	        takeDamage(unsigned int amount);
        void	        beRepaired(unsigned int amount);
        std::string     getName(void);
        unsigned int	getHitPoints(void);
        unsigned int	getEnergyPoints(void);
        unsigned int	getAttackDamage(void);
};

#endif
