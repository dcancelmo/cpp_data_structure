////
//// Created by Dan Cancelmo on 5/28/19.
////
//
//#include <iostream>
//#include "linkedlist.hpp"
//
//Node* LinkedList::getFirst() {
//    return head;
//}
//
//void LinkedList::setFirst(Node* newHead) {
//    head = newHead;
//}
//
//int LinkedList::getLength() {
//    return length;
//}
//
//void LinkedList::insert(int newData) {
//    if (contains(newData)) {
//        std::cout << newData << " is already in the list.\n";
//        return;
//    }
//    Node* node = new Node(newData);
//    if (!length) {
//        head = tail = node;
//    } else {
//        setLast(node);
//    }
//    length++;
//}
//
//void LinkedList::prepend(int newData) {
//    if (contains(newData)) {
//        std::cout << newData << " is already in the list.\n";
//        return;
//    }
//    Node* node = new Node(newData);
//    if (!length) {
//        head = tail = node;
//    } else {
//        node->setNext(head);
//        head = node;
//    }
//    length++;
//}
//
//void LinkedList::print() {
//    Node* curr = head;
//    std::cout << "[" << curr->getData();
//    for (int i = 1; i < length; i++) {
//        curr = curr->getNext();
//        std::cout <<  ", " << curr->getData();
//    }
//    std::cout << "]\n";
//}
//
//int LinkedList::removeData(int oldData) {
//    Node* curr = head;
//    if (curr->getData() == oldData) {
//        head = curr->getNext();
//        length--;
//        return curr->getData();
//    }
//    for (int i = 1; i < length; i++) {
//        Node* prev = curr;
//        curr = curr->getNext();
//        if (curr->getData() == oldData) {
//            prev->setNext(curr->getNext());
//            length--;
//            return  curr->getData();
//        }
//    }
//}
//
//LinkedList::LinkedList() {
//    head = tail = nullptr;
//    length = 0;
//}
//
//Node* LinkedList::getLast() {
//    return tail;
//}
//
//void LinkedList::setLast(Node* newNode) {
//    tail->setNext(newNode);
//    tail = newNode;
//}
//
//int LinkedList::getAtPosition(int num) {
//    Node* curr = head;
//    for (int i = 1; i < num; i++) {
//        curr = curr->getNext();
//    }
//    return curr->getData();
//}
//
//bool LinkedList::contains(int num) {
//    Node* curr = head;
//    for (int i = 0; i < length; i++) {
//        if (curr->getData() == num) return true;
//        curr = curr->getNext();
//    }
//    return false;
//}
//
//Node *LinkedList::removeFirst() {
//    Node* curr = head;
//    head = curr->getNext();
//    length--;
//    return curr;
//}
