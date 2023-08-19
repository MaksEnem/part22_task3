#include <iostream>
#include <map>
#include <string>

void anagrams(std::string &str_1, std::string& str_2, bool& is_anagram) {

	std::map<int, std::string> word_1Map;
	std::pair<int, std::string>oPair_1;

	std::map<int, std::string> word_2Map;
	std::pair<int, std::string>oPair_2;	

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
	}

	if (word_2Map.empty() == 1) {

		is_anagram = true;
		std::cout << is_anagram;

	}
	else {

		std::cout << is_anagram;

	}
}

int main() {

	std::string str_1;
	std::string str_2;
	bool is_anagram = false;

	std::cout << "Enter the first word:";
	std::cin >> str_1;

	std::cout << "Enter the second word:";
	std::cin >> str_2;

	anagrams(str_1, str_2, is_anagram);
}