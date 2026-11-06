#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){

    if(vin.size() == 0){

        return -1;

    }
    int minin = 0;
    int min = vin[0];

    for(int i = 1; i < vin.size(); i++){

        if(vin[i] < min){

            minin = i;
            min = vin[i];

        }

    }

    return minin;

}

int main(){

    std::vector<double> vin;

    vin = {1, 24, 9, -12};
    std::cout << min_vector_element(vin) << std::endl;

    vin = {0};
    std::cout << min_vector_element(vin) << std::endl;

    vin = {12222, -87678, 2, 3, 3, 2, 4, 2, -87678};
    std::cout << min_vector_element(vin) << std::endl;

    vin = {1, 24, 9, 1};
    std::cout << min_vector_element(vin) << std::endl;

    vin = {};
    std::cout << min_vector_element(vin) << std::endl;

}