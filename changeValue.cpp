#include <iostream>

//Function to change the value of the double pointed by the pointer to 42
void changeValue(double* ptr) {

    *ptr = 42; //change the value of the pointed double
}

int main() {
    double myDouble = 3.21; //Declare the double

    std::cout << "Original value of the double: " << myDouble << std::endl;

    changeValue(&myDouble); //call the function to change the value

    std::cout << "The value after changed: " << myDouble << std::endl;
    
}