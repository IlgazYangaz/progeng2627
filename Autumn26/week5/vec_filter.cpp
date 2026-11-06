#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for(int i = 0; i < vin.size(); i++){

        if(vin[i] != t){

            vout.push_back(vin[i]);

        }

    }

}

int main(){

    std::vector<double> vin, vout;

    vin = {1, 4, 1.1, 422, 34, -0.234, 4, 9, 1.1};
    filter_v(vin, 1.1, vout);

    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << std::endl;
    }

}