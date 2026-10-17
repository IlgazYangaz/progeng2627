#include <iostream>

int main(){

    double x, y;
    int n;

    std::cin >> x >> n;

    y = 1;

    for(int i = 0; i < n; i++){

        y = y * x;

    }

    std::cout << "x^n = " << y << std::endl;
}