#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template <typename T>
class Stack {
private:
    LinkedList<T> list;
    
public:
    // Constructors & Destructor
    Stack();
    ~Stack();
    
    // Stack operations
    void push(const T& item);
    T pop();
    T& peek();
    bool isEmpty() const;
    int size() const;
};

// Template implementation goes here

#endif // STACK_H