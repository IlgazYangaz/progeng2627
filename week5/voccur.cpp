#include <iostream>
#include <vector>

int main(){

    int a, b, t, n = 0;
    std::vector<int> v1, v2;
    
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

        if(v1[i] == b){

            n++;
            v2.push_back(i);

        }

    }

    if(n == 0){

        std::cout << "there are no occurences of " << b << std::endl;

    }
    else{

    std::cout << "there are " << n << " occurences of " << b << std::endl;
    std::cout << "they are at the indices: " << std::endl;

    for(int i = 0; i < n; i++){

        std::cout << v2[i] << std::endl;
        
    }

    }
}