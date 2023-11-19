/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_Said && Cakes.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:09:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/19 16:33:27 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

int main( void ) {

	int tests;
	int boxesN;
	int cakes;
	std::vector<int> sums;
	int sum = 0;

	std::cin >> tests;
	for ( int i = 0; i < tests; i++ ) {

		std::cin >> boxesN;
		std::vector<int> box;
		for ( int j = 0; j < boxesN; j++ ) {

			std::cin >> cakes;
			box.push_back( cakes );
		}
		
		std::sort( box.begin(), box.end() );
		
		sum = 0;
		for ( int k = 1; k < box.size(); k++ ) {

			sum += box[k] - box[0];
		}
		sums.push_back( sum );
	}
	for ( int i = 0; i < sums.size(); i++ ) {

		std::cout << sums[i] << std::endl;
	}
	return 0;
}