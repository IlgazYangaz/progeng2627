#include <iostream>

int main(){

    double x, y;
    int n, i;

    std::cin >> x >> n;
    i = 0;
    y = 1;

    while(i < n){
        y = y * x;
        i++;
    }

    std::cout << x << "^" << n << " = " << y << std::endl;

    y = 0;
    i = 0;

    while(i < n){

        y = y + x;
        i++;
    }

    std::cout << x << " * " << n << " = " << y << std::endl;
}