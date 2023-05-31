/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:47:24 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 14:50:03 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap trap;
    ScavTrap trap2("trap2");
    ScavTrap trap3(trap2);

    trap.attack("target");
    trap2.attack("target");
    trap3.attack("target");
    trap.guardGate();
    trap2.guardGate();
    trap3.guardGate();
    return (0);
}