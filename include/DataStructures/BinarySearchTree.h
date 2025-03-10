#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>
#include <functional>

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(const T& value);
    ~TreeNode();
};

template <typename T, typename Compare = std::less<T>>
class BinarySearchTree {
private:
    TreeNode<T>* root;
    Compare comp;
    int size;
    
    // Private helper methods
    void insertNode(TreeNode<T>*& node, const T& value);
    bool searchNode(TreeNode<T>* node, const T& value) const;
    void destroyTree(TreeNode<T>* node);
    void inOrderTraversal(TreeNode<T>* node, std::function<void(const T&)> visit) const;
    
public:
    // Constructors & Destructor
    BinarySearchTree();
    ~BinarySearchTree();
    
    // BST operations
    void insert(const T& value);
    bool search(const T& value) const;
    void remove(const T& value);
    int getSize() const;
    bool isEmpty() const;
    
    // Tree traversal methods
    void inOrder(std::function<void(const T&)> visit) const;
    void preOrder(std::function<void(const T&)> visit) const;
    void postOrder(std::function<void(const T&)> visit) const;
};

// Template implementation goes here

#endif // BINARY_SEARCH_TREE_H