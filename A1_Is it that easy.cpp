/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A1_Is it that easy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:01:28 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/19 16:03:16 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {

	int test;
	
	std::cin >> test;
	
	if ( test % 2 )
		std::cout << "Ehab" << std::endl;
	else
		std::cout << "Mahmoud" << std::endl;
	return 0;
}