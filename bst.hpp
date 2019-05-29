//
// Created by Dan Cancelmo on 5/29/19.
//

#ifndef C_BST_HPP
#define C_BST_HPP

#include "treenode.hpp"

template <typename T>
class BST {
    TreeNode<T>* root;
public:
    TreeNode<T>* getRoot() {
        return root;
    }

    void setRoot(TreeNode<T>* newRoot) {
        root = newRoot;
    }
};


#endif //C_BST_HPP
