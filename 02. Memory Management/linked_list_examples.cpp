#include <iostream>
#include <iomanip>
#include <climits>

struct Node {
    int value;
    Node* next;
};

// Complexity: O(1)
void add_front(Node*& list, int x)
{
    list = new Node {x, list};
}

// Complexity: O(N)
void display(Node* list)
{
    std::cout << "List: ";
    while (list) { // list != nullptr
        std::cout << list->value << " ";
        list = list->next;
    }
    std::cout << "\n";
}

// Complexity: O(N)
int size(Node* list)
{
    int result = 0;
    while (list) {
        result++;
        list = list->next;
    }
    return result;
}

// Complexity: O(N)
void add_back(Node*& list, int x)
{
    Node* new_node = new Node {x, nullptr};
    if (!list) {
        list = new_node;
        return;
    }

    Node* p = list;
    while (p->next) {
        p = p->next;
    }
    p->next = new_node;
}

// Complexity: O(N)
void free(Node*& list)
{
    Node* p = list;
    while (list) {
        list = list->next;
        delete p;
        p = list;
    }
}

// Complexity: O(N)
bool contains(Node* list, int x)
{
    while (list) {
        if (list->value == x) {
            return true;
        }
        list = list->next;
    }
    return false;
}

// Complexity: O(N)
int largest(Node* list)
{
    int largest_so_far = INT_MIN;
    while (list) {
        if (list->value > largest_so_far) {
            largest_so_far = list->value;
        }
        list = list->next;
    }
    return largest_so_far;
}

int main()
{
    std::cout << std::boolalpha;
    Node* start1 = nullptr;
    add_front(start1, -5);
    add_front(start1, -3);
    add_front(start1, -1);
    add_back(start1, -8);
    // display(start1);
    add_front(start1, -7);
    add_back(start1, -10);
    display(start1);
    std::cout << "size of start1 = " << size(start1) << "\n";
    Node* start2 = nullptr;
    display(start2);
    std::cout << "size of start2 = " << size(start2) << "\n";
    std::cout << contains(start1, 3) << "\n";
    std::cout << contains(start1, 6) << "\n";
    std::cout << largest(start1) << "\n";
    std::cout << largest(start2) << "\n";
    free(start1);
    free(start2);
    return 0;
}
