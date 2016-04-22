#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
	
	std::ifstream f;
	f.open("three-letter.txt");
	std::string s;
	while (f >> s) {
		if (((int)s[0] - 64) + ((int)s[1] - 64) == ((int)s[2]) - 64) {
			std::cout << s << std::endl;
		}
	}
	return 0;

}
