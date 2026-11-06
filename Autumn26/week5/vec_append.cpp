#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i = 0; i < vin1.size(); i++){

        vout.push_back(vin1[i]);

    }

    for(int i = 0; i < vin2.size(); i++){

        vout.push_back(vin2[i]);

    }

}

int main(){

    std::vector<int> vin1, vin2, vout;

    vin1 = {1, 4, 5 ,9};
    vin2 = {0, 0, 5, 0};
    append_vectors(vin1, vin2, vout);

    for(int i = 0; i < vout.size(); i++){

        std::cout << vout[i] << std::endl;

    }
    
}

