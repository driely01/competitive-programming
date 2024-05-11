#include <iostream>
#include <vector>
#include <string>

int main(void) {
	std::vector<std::string> strs;
	strs.push_back("hello");
	std::vector<std::string>::iterator it = strs.begin();
	std::cout << (*it)[0] << std::endl;
	return 0;
}