#include <iostream>

double arrayMax(double* arr, int size) {
    if (size <= 0) {
        // Return some appropriate value indicating error
        return -1;
    }

    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    double arr[] = {3.4, 2.1, 5.6, 1.2, 7.8};
    int size = sizeof(arr) / sizeof(arr[0]);

    double maxVal = arrayMax(arr, size);
    std::cout << "Maximum value in the array: " << maxVal << std::endl;

    return 0;
}