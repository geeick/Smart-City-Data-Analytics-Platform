#include <iostream>
#include <cassert>
#include "../include/DataStructures/LinkedList.h"

void testLinkedList() {
    std::cout << "Testing LinkedList..." << std::endl;
    
    // Test constructor and basic operations
    LinkedList<int> list;
    assert(list.isEmpty());
    assert(list.getSize() == 0);
    
    // Test adding elements
    list.addFront(10);
    assert(!list.isEmpty());
    assert(list.getSize() == 1);
    
    list.addBack(20);
    assert(list.getSize() == 2);
    
    // Test removing elements
    int value = list.removeFront();
    assert(value == 10);
    assert(list.getSize() == 1);
    
    value = list.removeFront();
    assert(value == 20);
    assert(list.isEmpty());
    
    // Test copy constructor and assignment operator
    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    
    LinkedList<int> list2 = list;  // Copy constructor
    assert(list2.getSize() == list.getSize());
    
    LinkedList<int> list3;
    list3 = list;  // Copy assignment
    assert(list3.getSize() == list.getSize());
    
    std::cout << "LinkedList tests passed!" << std::endl;
}

int main() {
    testLinkedList();
    return 0;
}