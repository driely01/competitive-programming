/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D_9lai9el Birthday.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:30:48 by del-yaag          #+#    #+#             */
/*   Updated: 2023/11/19 18:56:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main( void ) {

	int tests;

	cin >> tests;
	int arr[tests];
	for ( int i = 0; i < tests; i++ ) {
		int ans = -1;
		int t; cin >> t;
		map<int, int> mp;
		for ( int j = 0; j < t; j++ ) {
			int f; cin >> f;
			mp[f]+=1;
			if(mp[f] >= 3)
				ans = f;
		}
		arr[i] = ans;
	}
	for ( int i = 0; i < tests; i++ ) {
		cout << arr[i] << endl;
	}
	return 0;
}