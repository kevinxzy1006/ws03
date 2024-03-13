#include <iostream>

double* dynamicArray(int size, double M) {
    if (size <= 0) {
        // Return nullptr to indicate an error
        return nullptr;
    }

    double* arr = new double[size]; // Allocate memory for the array
    for (int i = 0; i < size; ++i) {
        arr[i] = M; // Initialize each element with the value M
    }
    return arr;
}

int main() {
    int size = 5;
    double M = 3.14;

    double* arr = dynamicArray(size, M);
    if (arr == nullptr) {
        std::cout << "Error: Invalid array size" << std::endl;
        return 1; // Exit with error code
    }

    // Print the elements of the array
    std::cout << "Array elements initialized with value " << M << ":" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory allocated for the array
    delete[] arr;

    return 0;
}