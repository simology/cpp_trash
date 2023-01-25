/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:17:36 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/01/24 17:53:17 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void )
{
    std::string name;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    Zombie zombi1(name);
    zombi1.announce(name);
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    zombi1.announce(name);
    delete zombi2;

    std::cout << "randomChump" << std::endl;    
    randomChump("random");
    return 0;
}