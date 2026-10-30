#include <iostream>

double max(double x, double y, double z){

    double m;

    if(x < y){

        m = y;

    }
    else{

        m = x;

    }

    if(m < z){

        m = z;
        
    }

    return m;

}

int main(){

    std::cout << (max(9, 4, 27) == 27) << std::endl;
    std::cout << (max(236234, 343, -2342) == 236234) << std::endl;
    std::cout << (max(9, 9, 0) == 9) << std::endl;


}