#include <chrono>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

void fill_random(std::vector<int>& values, int max_value)
{
    std::srand(0);
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = std::rand() % max_value;
    }
}

void fill_incremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

void fill_decremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = values.size() - 1; i >= 0; --i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

void selection_sort(std::vector<int>& values)
{
    for (int i = 0; i < values.size() - 1; i++) {
        // Find the item that belongs in position i.
        // Find the smallest item with index j >= i.
        int min_index = i;
        for (int j = i + 1; j < values.size(); j++) {
            if (values.at(j) < values.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(values.at(i), values.at(min_index));
    }
}

void print_vector(const std::vector<int>& values)
{
    for (int x : values) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}

int main()
{
    const int max_value = 1'000;
    std::vector<int> a(10'000'000);
    fill_decremental(a, max_value);
    // print_vector(a);
    std::cout << "Is sorted? " << std::is_sorted(a.begin(), a.end()) << "\n";
    auto start = std::chrono::high_resolution_clock::now();
    //selection_sort(a);
    std::sort(a.begin(), a.end());
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1'000'000.0;
    std::cout << "Total time: " << total_time << " seconds\n";
    std::cout << "Is sorted? " << std::is_sorted(a.begin(), a.end()) << "\n";
    // print_vector(a);

    return 0;
}
