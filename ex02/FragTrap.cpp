/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:03:35 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 15:12:26 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &trap)
{
    std::cout << "Fragtrap copy constructor called" << std::endl;
    *this = trap;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &trap)
{
    std::cout << "Fragtrap assignation operator called" << std::endl;
    this->_name = trap._name;
    this->_hitPoints = trap._hitPoints;
    this->_energyPoints = trap._energyPoints;
    this->_attackDamage = trap._attackDamage;
    return (*this);
}

void	FragTrap::attack(std::string const &target)
{
    std::cout << "Fragtrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << this->_name << " has requested a high five!" << std::endl;
}