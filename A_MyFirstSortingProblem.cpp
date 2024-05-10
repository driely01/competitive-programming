#include <iostream>
#include <vector>

int main( void ) {

	int numTest;
	std::cin >> numTest;
	for (int i = 0; i < numTest; i++) {
		int x;
		int y;
		std::cin >> x;
		std::cin >> y;
		if ( x < y ) {
			std::cout << x << " " << y << std::endl;
		} else {
			std::cout << y << " " << x << std::endl;
		}
	}
}