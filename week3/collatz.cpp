#include <iostream>

int main(){

    int x, max, i;

    std::cin >> x;
    max = 1;
    i = 0;

    for( ; x != 1; i++){

        if(max < x){

            max = x;

        }

        if(x % 2 == 0){

            x = x / 2;

        }
        else{

            x = 3 * x + 1;

        }

        std::cout << x << "\t";

    }

    std::cout << std::endl;
    std::cout << "number of steps taken: " << i << std::endl;
    std::cout << "largest number generated: " << max << std::endl;
}