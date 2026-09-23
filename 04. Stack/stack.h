#pragma once

#include <stdexcept>

template <typename T>
class Stack {

public:

    // Complexity: O(1)
    Stack(int capacity)
    {
        _capacity = capacity;
        _top = 0;
        _data = new T[_capacity];
    }

    Stack(const Stack& other) = delete;

    Stack<T>& operator=(const Stack& other) = delete;

    // Complexity: O(1)
    ~Stack()
    {
        delete [] _data;
    }

    // Complexity: O(1)
    int capacity() const
    {
        return _capacity;
    }

    // Complexity: O(1)
    int size() const
    {
        return _top;
    }

    // Complexity: O(1)
    bool is_empty() const
    {
        return _top == 0;
    }

    // Complexity: O(1)
    void push(T value)
    {
        if (_top == _capacity) {
            throw std::overflow_error("Stack Overflow!");
        }
        _data[_top] = value;
        _top++;
    }

    // Complexity: O(1)
    T pop()
    {
        if (is_empty()) {
            throw std::underflow_error("Stack Underflow!");
        }
        _top--;
        return _data[_top];
    }

    // Complexity: O(1)
    T peek() const
    {
        if (is_empty()) {
            throw std::underflow_error("Stack Underflow!");
        }
        return _data[_top - 1];
    }

    // Complexity: O(1)
    void clear()
    {
        _top = 0;
    }

private:

    T* _data;
    int _capacity;
    int _top;
};
