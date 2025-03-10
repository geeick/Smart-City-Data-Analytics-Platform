#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

template <typename T>
class Queue {
private:
    LinkedList<T> list;
    
public:
    // Constructors & Destructor
    Queue();
    ~Queue();
    
    // Queue operations
    void enqueue(const T& item);
    T dequeue();
    T& front();
    bool isEmpty() const;
    int size() const;
};

// Template implementation goes here

#endif // QUEUE_H