/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:00:44 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/25 22:11:43 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
    *this = trap;
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &trap)
{
    this->_name = trap._name;
    this->_hitPoints = trap._hitPoints;
    this->_energyPoints = trap._energyPoints;
    this->_attackDamage = trap._attackDamage;
    return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points!" << std::endl;
}

std::string	ClapTrap::getName(void)
{
    return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void)
{
    return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
    return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}