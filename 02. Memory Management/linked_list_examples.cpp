#include <iostream>

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

int main()
{
    Node* start1 = nullptr;
    add_front(start1, 5);
    add_front(start1, 3);
    add_front(start1, 1);
    add_back(start1, 8);
    // display(start1);
    add_front(start1, 7);
    add_back(start1, 10);
    display(start1);
    std::cout << "size of start1 = " << size(start1) << "\n";
    Node* start2 = nullptr;
    display(start2);
    std::cout << "size of start2 = " << size(start2) << "\n";
    free(start1);
    free(start2);
    return 0;
}
