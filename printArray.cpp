#include <iostream>

//Function to print the content of a double array
void printArray(double* arr, int size) {
    std::cout <<"Array content: ";
    for(int i=0; i<size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    //Create a double array
    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    //call the printarray function and pass the array and its size as argument
    printArray(myArray, size);

    return 0;
}