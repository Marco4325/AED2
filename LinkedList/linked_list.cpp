#pragma once

#include <iostream>
#include <typeinfo>
#include "linked_list.h"
#include "node.cpp"

// CONSTRUCTOR

template <typename T>
LinkedList<T>::LinkedList(){
    set_head(nullptr);
    set_tail(nullptr);
}

// HEAD & TAIL

template <typename T>
bool LinkedList<T>::set_head(Node<T>* _node){
    if(typeid(*_node) != typeid(Node<T>)){ 
        std::cout << "ERROR: Input is not a node or the node's type is wrong.";
        return false;
    }

    this->head = _node;
    return true;
}

template <typename T>
bool LinkedList<T>::set_tail(Node<T>* _node){
    if(typeid(*_node) != typeid(Node<T>)){ 
        std::cout << "ERROR: Input is not a node or the node's type is wrong.";
        return false;
    }

    this->tail = _node;
    return true;
} 

template <typename T>
Node<T>* LinkedList<T>::get_head(){ return this->head; }

template <typename T>
Node<T>* LinkedList<T>::get_tail(){ return this->tail; }

// SIZE

template <typename T>
void LinkedList<T>::increment_list_size(){ this->size++; }

template <typename T>
int LinkedList<T>::get_list_size(){ return this->size; }

template <typename T>
void LinkedList<T>::decrement_list_size(){ this->size--; }

// INSERTS

template <typename T>
bool LinkedList<T>::push_back(T _value){
    Node<T>* newNode = new Node<T>{_value, nullptr};

    if(!get_list_size()) {
        set_head(newNode);
        set_tail(newNode);
        increment_list_size();
        return true;
    }

    get_tail()->set_next_node(newNode);
    set_tail(newNode);
    increment_list_size();
    return true;
}

template <typename T>
bool LinkedList<T>::push_front(T _value){
    Node<T>* newNode = new Node<T>{_value, this->get_head()};
    if( this->get_list_size() == 0 ){ this->set_tail(newNode); }
    this->set_head(newNode);
    increment_list_size();
    return true;
}

// DELETES

template <typename T>
bool LinkedList<T>::pop_back(){
    Node<T>* aux = get_head();
    
    if(get_list_size() == 1){
        set_head(nullptr);
        set_tail(nullptr);
        decrement_list_size();
        return true;
    }

    while(aux->get_next_node()){
        Node<T>* targetNode = aux->get_next_node()->get_next_node();

        if(!targetNode){
            aux->set_next_node(nullptr);
            set_tail(aux);
            decrement_list_size();
            return true;
        }
        aux = aux->get_next_node();
    }

    return false;
}

template <typename T>
bool LinkedList<T>::pop_front(){
    Node<T>* temp = this->get_head();
    this->set_head(temp->get_next_node());
    temp->set_next_node(nullptr);
    decrement_list_size();
    return true;
}

// INFORMATION

template <typename T>
void LinkedList<T>::print_list(){
    Node<T> *aux = get_head();
    while(aux){
        std::cout << aux->get_value() << " ";
        aux = aux->get_next_node();
    }
    std::cout << std::endl;
}