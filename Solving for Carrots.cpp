#include <iostream>
#include <string>

int main()
{
    short int contestants = 0;
    short int huffles = 0;
    std::string dud = "";
    std::cin >> contestants;
    std::cin >> huffles;
    for (short int i = 0; i < contestants; i++) {
        std::cin >> dud;
    }

    std::cout << huffles;
    return 0;
}