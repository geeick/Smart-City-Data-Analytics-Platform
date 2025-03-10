#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;
    
    Node(const T& value);
    ~Node();
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;
    
public:
    // Constructors & Destructor
    LinkedList();
    LinkedList(const LinkedList<T>& other);  // Copy constructor
    LinkedList(LinkedList<T>&& other);       // Move constructor
    ~LinkedList();
    
    // Assignment operators
    LinkedList<T>& operator=(const LinkedList<T>& other);  // Copy assignment
    LinkedList<T>& operator=(LinkedList<T>&& other);       // Move assignment
    
    // Basic operations
    void addFront(const T& item);
    void addBack(const T& item);
    T removeFront();
    bool isEmpty() const;
    int getSize() const;
    
    // Iterator support
    class Iterator {
        // Iterator implementation
    };
    
    Iterator begin();
    Iterator end();
};

// Template implementation goes here

#endif // LINKED_LIST_H