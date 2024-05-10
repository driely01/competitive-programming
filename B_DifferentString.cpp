#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

int main( void ) {

	int testNum;
	std::cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		std::string str;
		std::cin >> str;
		if (str.find_first_not_of(str[0]) == std::string::npos) {
			std::cout << "NO" << std::endl;
		} else {
			std::cout << "YES" << std::endl;
			std::string str1 = str;
			std::multiset<char> shuffled;
			for (size_t i = 0; i < str.length(); i++) {
				shuffled.insert(str[i]);
			}
			std::multiset<char>::iterator it = shuffled.begin();
			int i = 0;
			for (; it != shuffled.end(); ++it) {
				str[i++] = *it;
			}
			if (str == str1) {
				reverse(str.begin(), str.end());
			}
			std::cout << str << std::endl;
		}
	}
	return 0;
}