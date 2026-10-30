#include <iostream>

double mypow(double x, int y){

    double result;
    result = 1;

    if(y >= 0){

        for(int i = 0; i < y; i++){

            result = result * x;

        }

    }
    else{

        for(int i = 0; i > y; i--){

            result = result / x;

        }

    }

    return result;

}

int main(){

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "5^-2: " << mypow(5, -2) << std::endl;

}