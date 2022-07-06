#include <iostream>
#include <string>

int main()
{
    std::string first;
    std::string second;
    std::cin >> first;
    std::cin >> second;
    std::string newFirst;
    std::string newSecond;
    
    //Evaluate largest
    for (int i = 0; i < 3; i++) {
        newSecond.append(1, first[first.length() - 1 - i]);
        newFirst.append(1, second[second.length() - 1 - i]);
    }

    int fNum = std::stoi(newFirst, nullptr, 10);
    int sNum = std::stoi(newSecond, nullptr, 10);

    if (fNum > sNum) {
        std::cout << fNum;
    }
    else {
        std::cout << sNum;
    }


    return 0;
}