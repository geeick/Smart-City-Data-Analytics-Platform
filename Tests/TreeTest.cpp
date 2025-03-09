#include <iostream>
#include <cassert>
#include <vector>
#include "../include/DataStructures/BinarySearchTree.h"

void testBinarySearchTree() {
    std::cout << "Testing BinarySearchTree..." << std::endl;
    
    // Test constructor and basic operations
    BinarySearchTree<int> bst;
    assert(bst.isEmpty());
    assert(bst.getSize() == 0);
    
    // Test insertion
    bst.insert(50);
    assert(!bst.isEmpty());
    assert(bst.getSize() == 1);
    
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    assert(bst.getSize() == 5);
    
    // Test search
    assert(bst.search(50));
    assert(bst.search(30));
    assert(bst.search(20));
    assert(!bst.search(100));
    
    // Test traversal
    std::vector<int> inOrderResult;
    bst.inOrder([&inOrderResult](const int& value) {
        inOrderResult.push_back(value);
    });
    
    // Check in-order traversal results (should be sorted)
    assert(inOrderResult.size() == 5);
    assert(inOrderResult[0] == 20);
    assert(inOrderResult[1] == 30);
    assert(inOrderResult[2] == 40);
    assert(inOrderResult[3] == 50);
    assert(inOrderResult[4] == 70);
    
    std::cout << "BinarySearchTree tests passed!" << std::endl;
}

int main() {
    testBinarySearchTree();
    return 0;
}