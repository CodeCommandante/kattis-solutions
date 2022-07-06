#include <iostream>
#include <string>


int main()
{
	std::string greeting;
	std::cin >> greeting;

	//String size...
	int length = greeting.length();
	std::string response;
	response.append(1,greeting[0]);
	response.append((length-2)*2,greeting[1]);
	response.append(1,greeting[length - 1]);

	std::cout << response;
	return 0;
}