#include <iostream>

int main(){

    int x, max, min;

    std::cout << "enter a number: " << std::endl;
    std::cin >> x;
    
    max = x;
    min = x;

    while(x != 0){

        std::cout << "maximum number so far: " << max << std::endl;
        std::cout << "minimum number so far: " << min << std:: endl;
        std::cout << "enter another number: " << std::endl;
        std::cin >> x;

        if(x > max){

            max = x;

        }
        else if(x < min){

            min = x;

        }

        std::cout << std::endl;

    }
}