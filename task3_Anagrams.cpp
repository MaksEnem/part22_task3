#include <iostream>
#include <map>
#include <string>

int main() {

	std::map<int, std::string> word_1Map;
	std::pair<int, std::string>oPair_1;

	std::map<int, std::string> word_2Map;
	std::pair<int, std::string>oPair_2;
	
	std::string str_1 = "zxcv";
	std::string str_2 = "zxcv";
	

	for (int i = 0; i < str_1.size(); ++i) {		
		
		oPair_1 = std::make_pair(i, str_1[i]);
		word_1Map.insert(oPair_1);
	}

	for (int i = 0; i < str_2.size(); ++i) {

		oPair_2 = std::make_pair(i, str_2[i]);
		word_2Map.insert(oPair_2);
	}	

	for (std::map<int, std::string>::iterator it_1 = word_1Map.begin(); it_1 != word_1Map.end(); ++it_1) {		
		for (std::map<int, std::string>::iterator it_2 = word_2Map.begin(); it_2 != word_2Map.end(); ++it_2) {			

			if (it_1->second == it_2->second) {
				
				word_2Map.erase(it_2);
				break;
			}
		}
		std::cout << std::endl;
	}


	std::cout << std::endl;
	for (std::map<int, std::string>::iterator it_2 = word_2Map.begin(); it_2 != word_2Map.end(); ++it_2) {			
		
		std::cout << it_2->first << it_2->second << " ";
	}
	
}