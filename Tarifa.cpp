#include <iostream>

int main()
{
    int totalMB = 0;
    short int months = 0;

    std::cin >> totalMB;
    std::cin >> months;
    totalMB *= (months+1);

    for (int i = 0; i < months; i++)
    {
        short int temp;
        std::cin >> temp;
        totalMB -= temp;     
    }

    std::cout << totalMB;

    return 0;
}