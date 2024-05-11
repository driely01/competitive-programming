#include <iostream>
#include <vector>
#include <string>

using namespace std;

string func(vector<string> &strs) {
	vector<string>::iterator it = strs.begin();
	++it;
	if (strs.size() > 0) {
		string tmp = strs[0];
		size_t max = SIZE_T_MAX;
		for (; it != strs.end(); ++it) {
			string str = *it;
			if (tmp == str) {
				continue;
			} else {
				size_t sum = 0;
				if (tmp.length() < str.length()) {
					for (size_t i = 0; i < tmp.length(); i++) {
						if (tmp[i] != str[i]) {
							if (!i)
								return "";
							break;
						} else
							sum++;
					}
					if (max >= sum)
						max = sum;
				}
				else {
					for (size_t i = 0; i < str.length(); i++) {
						if (tmp[i] != str[i]) {
							if(!i)
								return "";
							break;
						} else
							sum++;
					}
					if (max >= sum)
						max = sum;
				}
			}
		}
		return strs[0].substr(0, max);
	}
	return "";
}
int main(void) {
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("flower");
	cout << func(strs) << endl;
	return 0;
}