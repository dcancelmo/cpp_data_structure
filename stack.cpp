////
//// Created by Dan Cancelmo on 5/28/19.
////
//
//#include <iostream>
//#include "Stack.hpp"
//
//Stack::Stack() {
//    list = new LinkedList();
//}
//
//int Stack::pop() {
//    return list->removeFirst()->getData();
//}
//
//int Stack::peek() {
//    return list->getFirst()->getData();
//}
//
//void Stack::push(int num) {
//    Node* newNode = new Node(num);
//    list->prepend(num);
//}
//
//int Stack::getSize() {
//    return list->getLength();
//}
//
//void Stack::print() {
//    list->print();
//}