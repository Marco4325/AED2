#pragma once

#include <typeinfo>
#include <iostream>
#include "linked_list.h"

// SETTERS
template <typename T>
bool Node<T>::set_value(T _value){
    if(typeid(_value) != typeid(T)){ 
        std::cout << "ERROR: Value inserted is not the same type as the node.";
        return false;
    }

    this->value = _value;
    return true;
}

template <typename T>
bool Node<T>::set_next_node(Node<T>* _node){
    if(typeid(*_node) != typeid(Node<T>)){ 
        std::cout << "ERROR: Input is not a node or the node's type is wrong.";
        return false;
    }

    this->nextNode = _node;
    return true;
}

// CONSTRUCTOR
template <typename T>
Node<T>::Node(T _value, Node<T>* _node){
    this->set_value(_value);
    this->set_next_node(_node);
}

// GETTERS
template <typename T> T Node<T>::get_value(){ return this->value; }
template <typename T> Node<T>* Node<T>::get_next_node(){ return this->nextNode; }