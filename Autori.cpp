#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string input;
    std::cin >> input;

    std::string output;

    for (int i = 0; i < input.length(); i++) {
        if (std::isupper(input[i])) {
            output.push_back(input[i]);
        }
    }

    std::cout << output;

    return 0;
}