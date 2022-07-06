#include <iostream>

int main() {
	int numJavs = 0;
	int length = 0;
	std::cin >> numJavs;

	for (int i = 0; i < numJavs; i++) {
		int input;
		std::cin >> input;
		length += input;
	}

	std::cout << (length - numJavs + 1) << std::endl;

	return 0;
}