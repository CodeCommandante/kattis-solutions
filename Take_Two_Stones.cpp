#include <iostream>

int main(){

    unsigned stones = 0;

    std::cin >> stones;

    if (stones%2){
        std::cout << "Alice";
    }
    else{
        std::cout << "Bob";
    }

    return 0;
}