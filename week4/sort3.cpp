#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
    // complete this function
    // so that the output is as in the examples below

    if(s3 < s2){

        myswap(s3, s2);

    }

    if(s2 < s1){

        myswap(s2, s1);

    }

    if(s3 < s2){

        myswap(s3, s2);

    }
    
    // use function myswap within this function
    // (remember to change the type of the parameters to double)
}

int main(){
    double n1, n2, n3;
    n1 = 5;
    n2 = 10;
    n3 = 0;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

    n1 = 9;
    n2 = 0;
    n3 = -345;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

    n1 = -9999;
    n2 = -10000;
    n3 = 10000;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}
