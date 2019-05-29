//
// Created by Dan Cancelmo on 5/29/19.
//

#ifndef C_TREENODE_HPP
#define C_TREENODE_HPP

template <typename T>
class TreeNode {
    T data;
    TreeNode<T>* parent;
    TreeNode<T>* leftchild;
    TreeNode<T>* rightchild;

public:
    explicit TreeNode(T newData) {
        data = newData;
        parent =leftchild = rightchild = nullptr;
    }

    void setData(T newData) {
        data = newData;
    }

    T getData() {
        return data;
    }

    void setParent(TreeNode<T>* newNode) {
        parent = newNode;
    }

    TreeNode<T>* getParent() {
        return parent;
    }

    void setLeft(TreeNode<T>* newNode) {
        leftchild = newNode;
    }

    TreeNode<T>* getLeft() {
        return leftchild;
    }

    void setRight(TreeNode<T>* newNode) {
        rightchild = newNode;
    }

    TreeNode<T>* getRight() {
        return rightchild;
    }

};

#endif //C_TREENODE_HPP
