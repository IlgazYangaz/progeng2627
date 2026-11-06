#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){

    for(int i = 0; i < vin.size(); i++){

        if(vin[i] == n){

            return i;
            
        }

    }

    return -1;

}

int main(){

    std::vector<int> vin;
    int n;

    vin = {1, 3, 0, -999, 1, 31431, 33, 0};

    n = 3;
    std::cout << search_vector(n, vin) << std::endl;

    n = 1;
    std::cout << search_vector(n, vin) << std::endl;

    n = -999;
    std::cout << search_vector(n, vin) << std::endl;

    n = 0;
    std::cout << search_vector(n, vin) << std::endl;
}