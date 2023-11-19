/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A2_Welcome new soldiers.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:50:33 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/19 15:57:33 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void ) {

	int test;
	int rank;
	
	std::cin >> test;
	
	for ( int i = 0; i < test; i++ ) {

		std::cin >> rank;
		if ( rank <= 1399 )
			std::cout << "Division 4" << std::endl;
		else if ( rank >= 1400 && rank <= 1599 )
			std::cout << "Division 3" << std::endl;
		else if ( rank >= 1600 && rank <= 1899 )
			std::cout << "Division 2" << std::endl;
		else if ( rank >= 1900 )
			std::cout << "Division 1" << std::endl;
	}
	return 0;
}