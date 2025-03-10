#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <functional>

template <typename T, typename Compare = std::less<T>>
class Heap {
private:
    std::vector<T> elements;
    Compare comp;
    
    // Helper methods
    void heapifyUp(int index);
    void heapifyDown(int index);
    int parent(int index) const;
    int leftChild(int index) const;
    int rightChild(int index) const;
    
public:
    // Constructors & Destructor
    Heap();
    ~Heap();
    
    // Heap operations
    void insert(const T& value);
    T extractTop();
    const T& peekTop() const;
    bool isEmpty() const;
    int size() const;
};

// Template implementation goes here

#endif // HEAP_H