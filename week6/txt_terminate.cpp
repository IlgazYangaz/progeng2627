#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    std::string txt;

    std::cout << "enter the name of the file in the form name_of_the_file.txt: " << std::endl;
    std::cin >> txt;

    infile.open(txt);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}