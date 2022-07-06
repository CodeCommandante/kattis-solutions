#include <iostream>
#include <string>

int main()
{
    short unsigned int cases = 0;
    std::cin >> cases;

    std::string array[cases] = {};

    for (int i=0; i < cases; i++)
    {
        int revDNA = 0;
        int revA = 0;
        int cost = 0;

        std::cin >> revDNA;
        std::cin >> revA;
        std::cin >> cost;

        revA -= cost;
        if (revA > revDNA){
            array[i] = "advertise";
        }
        else if (revA < revDNA){
            array[i] = "do not advertise";
        }
        else{
            array[i] = "does not matter";
        }
    }

    for( int i = 0; i < cases; i++ ){
        std::cout << array[i] << std::endl;
    }

    return 0;
}