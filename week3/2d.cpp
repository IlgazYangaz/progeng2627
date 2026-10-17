#include <iostream>

int main(){

    int n;

    std::cin >> n;

    for(int x = 0; x < n; x++){

        for(int y = 0; y < n; y++){

            std::cout << "*";

        }

        std::cout << std::endl;

    }

}