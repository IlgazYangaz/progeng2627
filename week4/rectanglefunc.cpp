#include <iostream>

bool rectfunc(double a, double b, double& A, double& P){

    if(a <= 0 || b <= 0){

        A = 0;
        P = 0;
        return 0;
        
    }

    A = a*b;
    P = 2*a + 2*b;

    return 1;

}

int main(){

    double a, b, A, P;

    a = 10;
    b = 20;
    rectfunc(a, b, A, P);
    std::cout << "Area: " << A << " Perimeter: " << P << std::endl;

    a = -40;
    b = 23;
    rectfunc(a, b, A, P);
    std::cout << "Area: " << A << " Perimeter: " << P << std::endl;

    a = 0;
    b = 290;
    rectfunc(a, b, A, P);
    std::cout << "Area: " << A << " Perimeter: " << P << std::endl;

    a = 1;
    b = 2;
    rectfunc(a, b, A, P);
    std::cout << "Area: " << A << " Perimeter: " << P << std::endl;

}