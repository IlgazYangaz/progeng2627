#include <iostream>
#include <cmath>

double sumpow(double x, int n){

    double sum = 0;
    
    for(int i = 1; i <= n; i++){

        sum = sum + std::pow(x, i);

    }

    return sum;

}

int main(){

    double a, b;
    std::cin >> a >> b;

    std::cout << sumpow(a, b) << std::endl;
}