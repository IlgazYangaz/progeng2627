#include <iostream>

int main(){

    int y, n;

    std::cin >> n;

    y = 1;

    for (int i = n; i > 0; i--){

        y = y * i;

    }

    std::cout << n << "! = " << y << std::endl;
}