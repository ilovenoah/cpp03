/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:26:40 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 14:19:16 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        // constructor
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &trap);
        ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &trap);
        void attack(std::string const &target);
        void guardGate();
};


#endif