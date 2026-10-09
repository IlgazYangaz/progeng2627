#include <iostream>

int main(){

    double a, b, perimeter, area;

    std::cout << "enter the first side length of a rectangle" << std::endl;
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "enter the second side length" << std::endl;
    std::cin >> b;

    perimeter = 2*a + 2*b;
    area = a*b;

    std::cout << "the perimeter of this rectangle is: " << perimeter << std::endl;
    std::cout << "the area of this rectangle is: " << area << std::endl;
}