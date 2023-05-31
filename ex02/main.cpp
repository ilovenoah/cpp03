/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:47:24 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 15:14:29 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap trap;
    FragTrap trap2("trap2");
    FragTrap trap3(trap2);

    trap.attack("target");
    trap2.attack("target");
    trap3.attack("target");
    trap.highFivesGuys();
    trap2.highFivesGuys();
    trap3.highFivesGuys();
    return (0);
}