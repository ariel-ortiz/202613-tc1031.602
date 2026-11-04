#include <algorithm>
#include <iostream>
#include <vector>

// Complexity: O(N)
int sequential_search(const std::vector<int>& data, int value)
{
    for (int i = 0; i < data.size(); i++) {
        if (value == data.at(i)) {
            return i;
        }
    }
    return -1;
}

// Complexity: O(log N)
int binary_search(const std::vector<int>& data, int value)
{
    int start = 0;
    int end = data.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (value == data.at(mid)) {
            return mid;
        } else if (value < data.at(mid)) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> nums {
        23, 48, 97, 15, 51, 72, 58, 87
    };

    std::cout << sequential_search(nums, 72) << "\n";
    std::cout << sequential_search(nums, 99) << "\n";

    std::sort(nums.begin(), nums.end());

    std::cout << binary_search(nums,51) << "\n";
    std::cout << binary_search(nums, 99) << "\n";


    return 0;
}
