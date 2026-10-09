#include <iostream>

int main(){

    double gbp, euroexr, euroconv;

    std::cout << "enter an amount of money in British Pounds: " << std::endl;
    std::cin >> gbp;
    std::cout << std::endl;
    std::cout << "enter the current exchange rate to euros (1 pound = x euros): " << std::endl;
    std::cin >> euroexr;

    euroconv = gbp * euroexr;

    std::cout << "this amount of money is worth " << euroconv << " euros" << std::endl;

}