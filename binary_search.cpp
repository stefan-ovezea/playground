#include <iostream>
#include <array>

int binarySearch(auto &arr, int num);

int main() {

    std::array<int, 11> arr = {11, 21, 34, 45, 53, 67, 78, 82, 96, 110, 123};
    int num = 78;
    
    int result = binarySearch(arr, num);
    
    if (result == -1) {
        std::cout << "Number not found!\n";
    } else {
        std::cout << "Found the number " << num << " at position " << result << ".\n";
    }
    return 0;
}

int binarySearch(auto &arr, int num) {
    int leftPos = 0;
    int rigthPos = arr.size() - 1;
    int operationsCounter = 1;

    while (leftPos <= rigthPos) {
        int mid = (leftPos + rigthPos) / 2;
        if (arr[mid] == num) {
            std::cout << "Finished after " << operationsCounter << " operations.\n";
            return mid;
        } else if (arr[mid] <= num) {
            leftPos = mid;
        } else {
            rigthPos = mid;
        }
        operationsCounter++;
    }

    std::cout << "Finished after " << operationsCounter << " operations.\n";
    return -1;
}
