#include <iostream>
#include "stack.h"

bool is_palindrome(const std::string& phrase)
{
    Stack<char> s(phrase.size());

    for (char c : phrase) {
        s.push(c);
    }

    for (char c : phrase) {
        if (c != s.pop()) {
            return false;
        }
    }

    return true;
}

bool is_balanced(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        switch (c)
        {
        case '(':
        case '[':
        case '{':
            s.push(c);
            break;
        case ')':
            if (s.is_empty() or s.pop() != '(') {
                return false;
            }
            break;
        case ']':
            if (s.is_empty() or s.pop() != '[') {
                return false;
            }
            break;
        case '}':
            if (s.is_empty() or s.pop() != '{') {
                return false;
            }
            break;
        }
    }
    return s.is_empty();
}

int main()
{
    std::string word = "kayak";
    std::cout << word << " is a palindrome? " << is_palindrome(word) << "\n";
    word = "cat";
    std::cout << word << " is a palindrome? " << is_palindrome(word) << "\n";
    word = "step on no pets";
    std::cout << word << " is a palindrome? " << is_palindrome(word) << "\n";
    word = "({}()[])[()()]";
    std::cout << word << " is balanced? " << is_balanced(word) << "\n";
    word = "((())";
    std::cout << word << " is balanced? " << is_balanced(word) << "\n";
    word = "]]][[[";
    std::cout << word << " is balanced? " << is_balanced(word) << "\n";

    return 0;
}
