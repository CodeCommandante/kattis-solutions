#include <iostream>

int main(){

    int total = 1;
    for(int i = 0; i < 3; i++){
        int dud;
        std::cin >> dud;
        total *= dud;
    }

    std::cout << total;

    return 0;
}