#include <iostream>
#include <map>
#include <string>

int main() {

	std::map<int, std::string> word_1Map;
	std::pair<int, std::string>oPair;
	
	std::string str_1 = "zxcv";

	

	for (int i = 0; i < str_1.size(); ++i) {		
		
		oPair = std::make_pair(i, str_1[i]);
		word_1Map.insert(oPair);
	}

	for (std::map<int, std::string>::iterator it = word_1Map.begin(); it != word_1Map.end(); ++it) {

		std::cout << it->first << " " << it->second << std::endl;

	}
}