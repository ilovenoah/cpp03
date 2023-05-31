/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:39:13 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/25 22:19:42 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap	clap;
    ClapTrap	clap2("clap");
    ClapTrap	clap3(clap);

    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(5);
    clap2.attack("enemy");
    clap2.takeDamage(5);
    clap2.beRepaired(5);
    clap3.attack("enemy");
    clap3.takeDamage(5);
    clap3.beRepaired(5);
    return (0);
}