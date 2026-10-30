#include <iostream>

void intdiv(int a, int b, int& c, int& r){

    for( ; a >= b; a = a - b){

        c++;

    }

    r = a;

}

int main(){

    int a, b, c, d;

    a = 8, b = 5, c = 0;
    intdiv(a, b, c, d);
    std::cout << a << "/" << b << " = " << c << "*" << b << " + " << d << std::endl;

    a = 123, b = 10, c = 0;
    intdiv(a, b, c, d);
    std::cout << a << "/" << b << " = " << c << "*" << b << " + " << d << std::endl;

    a = 131313, b = 9, c = 0;
    intdiv(a, b, c, d);
    std::cout << a << "/" << b << " = " << c << "*" << b << " + " << d << std::endl;

}