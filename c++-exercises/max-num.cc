#include <iostream>
#include <vector>

int findMax(const std::vector<int>& numbers) {
    // Assumes vector is not empty
    int maxNum = numbers[0];
    for (int num : numbers) {
        if (num > maxNum) {
            maxNum = num;
        }
    }
    return maxNum;
}

int main() {
    std::vector<int> input = {3, 41, 56, 9, 4, 12};
    std::cout << findMax(input) << std::endl;
    return 0;
}