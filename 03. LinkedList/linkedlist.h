#pragma once

#include <iostream>
#include <sstream>
#include <stdexcept>

template<typename T>
class LinkedList {

public:

    // Complexity: O(1)
    LinkedList()
    {
        _sentinel = new Node;
        _sentinel->next = _sentinel;
        _sentinel->prev = _sentinel;
    }

    // Complexity: O(N)
    LinkedList(std::initializer_list<T> args): LinkedList()
    {
        for (T arg : args) {
            insert_back(arg);
        }
    }

    // Complexity: O(N)
    ~LinkedList()
    {
        Node* p = _sentinel->next;
        while (p != _sentinel) {
            Node* q = p;
            p = p->next;
            delete q;
        }
        delete _sentinel;
    }

    // Complexity: O(1)
    void insert_back(T value)
    {
        Node* new_node = new Node;
        new_node->value = value;
        new_node->prev = _sentinel->prev;
        new_node->next = _sentinel;
        _sentinel->prev->next = new_node;
        _sentinel->prev = new_node;
        _size++;
    }

    // Complexity: O(1)
    void insert_front(T value)
    {
        Node* new_node = new Node;
        new_node->value = value;
        new_node->next = _sentinel->next;
        new_node->prev = _sentinel;
        _sentinel->next->prev = new_node;
        _sentinel->next = new_node;
        _size++;
    }

    // Complexity: O(1)
    int size() const
    {
        return _size;
    }

    // Complexity: O(1)
    bool is_empty() const
    {
        return _size == 0;
    }

    // Complexity: O(1)
    T remove_front()
    {
        if (is_empty()) {
            throw std::length_error("Can't remove front from an empty list");
        }
        Node* p = _sentinel->next;
        T result = p->value;
        _sentinel->next = p->next;
        p->next->prev = _sentinel;
        delete p;
        _size--;
        return result;
    }

    // Complexity: O(N)
    std::string to_string() const
    {
        std::ostringstream result;
        result << "[";
        bool first_time = true;
        Node* p = _sentinel->next;
        while (p != _sentinel) {
            if (first_time) {
                first_time = false;
            } else {
                result << ", ";
            }
            result << p->value;
            p = p->next;
        }
        result << "]";
        return result.str();
    }

private:

    struct Node {
        T value;
        Node* prev;
        Node* next;
    };

    int _size = 0;
    Node* _sentinel = nullptr;
};

// Complexity: O(N)
template<typename T>
std::ostream& operator<<(std::ostream& os, const LinkedList<T>& list)
{
    return os << list.to_string();
}
