#include <iostream>
#include <array>

int binarySearch(auto &arr, int num);

int main() {

    std::array<int, 11> arr = {11, 21, 34, 45, 53, 67, 78, 82, 96, 110, 123};
    int num = 78;
    std::cout << "Array size: " << arr.size() << "\n";
    
    binarySearch(arr, num);
    return 0;
}

int binarySearch(auto &arr, int num) {
    int leftPos = 0;
    int rigthPos = arr.size() - 1;
    int opperationsCounter = 0;

    while (leftPos <= rigthPos) {
        int mid = (leftPos + rigthPos) / 2;
        if (arr[mid] == num) {
            return arr[mid];
        }
    }
    
    return -1;
}
