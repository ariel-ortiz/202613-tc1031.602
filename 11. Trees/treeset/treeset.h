#pragma once

#include <functional>
#include <initializer_list>
#include <queue>
#include <cmath>

template<typename T>
class TreeSet {

public:

    // Complexity: O(1)
    TreeSet() {}

    // Complexity: O(N log N)
    TreeSet(std::initializer_list<T> args)
    {
        for (T elem : args) {
            add(elem);
        }
    }

    // Complexity: O(log N)
    bool add(T value)
    {
        if (not _root) {
            _root = new Node(value);
            _size++;
            return true;
        }

        Node* p = _root;
        while (true) {
            if (value == p->value) {
                return false;
            }
            if (value < p->value) {
                if (p->left) {
                    p = p->left;
                } else {
                    p->left = new Node(value);
                    _size++;
                    return true;
                }
            } else {
                if (p->right) {
                    p = p->right;
                } else {
                    p->right = new Node(value);
                    _size++;
                    return true;
                }
            }
        }
    }

private:

    struct Node {
        Node(T value): value(value) {}
        T value;
        Node* left = nullptr;
        Node* right = nullptr;
    };

    Node* _root = nullptr;
    int _size = 0;

};
