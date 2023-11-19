/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C_Magical land.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:42:02 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/19 17:19:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

int main( void ) {

	int tests;
	
	std::cin >> tests;

	for( int i = 0; i < tests; i++ ) {

		int row;
		int column;
		std::cin >> row;
		std::cin >> column;
		char land[row][column];
		for ( int j = 0; j < row; j++ ) {

			for ( int k = 0; k < column; k++ ) {
				
				char stone;
				std::cin >> stone;
				land[j][k] = stone;
			}
		}
		std::cout << std::endl;
		for ( int i = 0; i < row; i++ ) {
			
			for ( int j = 0; j < column; j++ ) {

				if ( land[i][j] == '*' ) {

					for ( int k = row - 1; k >= 0; k-- ) {

						if ( land[k][j] == '*' ) {

							if ( k < row - 1 && land[k + 1][j] == '.' ) {

								land[k][j] = '.';
								land[k + 1][j] = '*';
							}
						}
					}
				}
				std::cout << land[i][j];
			}
			std::cout << std::endl;
		}
	}
	return 0;
}