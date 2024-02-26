#include <iostream>
#include <vector>
int linearSearch(const std::vector<int>& array, int target) {
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] == target)
            return i; 
    }
    return -1; 
}

int main() {
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int result = linearSearch(arr, target);
    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found in array" << std::endl;
    
    return 0;
}
