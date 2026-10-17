#include <iostream>

int main(){

    double x, y;
    int n;

    // x/n = y*n + x after while loop

    std::cin >> x >> n;

    y = 0;

    while(x >= n){
        y++;
        x = x - n;
    }

    std::cout << "x / n = " << y << " * " << n << " + " << x << std::endl;
}