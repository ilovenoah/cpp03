/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:03:38 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 15:26:16 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        // constructor
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &trap);
        ~FragTrap();

        FragTrap &operator=(const FragTrap &trap);
        void attack(std::string const &target);
        void highFivesGuys(void);
};