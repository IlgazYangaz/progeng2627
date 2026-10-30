#include <iostream>
#include <vector>

int main(){

    int a, b, t;
    std::vector<int> v1;
    
    std::cout << "please enter the size of the vector: ";
    std::cin >> a;
    std::cout << std::endl;

    for(int i = 0; i < a; i++){

        std::cin >> t;
        std::cout << std::endl;
        v1.push_back(t);

    }

    std::cout << "please enter a number" << std::endl;
    std::cin >> b;

    for(int i = 0; i < v1.size(); i++){

        if(v1[i] < b){

            std::cout << v1[i] << std::endl;

        }

    }
    
}