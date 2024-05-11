#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main(void) {

	std::vector<int> nums;
	int target =  9;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	
	std::multimap<int, int> container;
	for (int i = 0; i < nums.size(); i++) {
		std::cout << nums[i] << std::endl;
		container.insert(decltype(container)::value_type(nums[i], i));
	}
	std::multimap<int, int>::iterator first = container.begin();
	std::multimap<int, int>::iterator last = container.end();
	last--;
	while (1) {
		if (first->first + last->first > target) {
			last--;
		}
		else if (first->first + last->first < target) {

			first++;
		}
		else {
			std::cout << "[" << first->second << ',' << last->second << "]" << std::endl;
			break;
		}
	}
	return 0;
}