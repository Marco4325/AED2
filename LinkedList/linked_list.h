#pragma once

template <typename T>
class Node{
    private:
        T value;
        Node<T>* nextNode;

    public:
        Node(T _value, Node<T>* _nextNode);

        bool set_value(T _value);
        bool set_next_node(Node<T>* _node);

        T get_value();
        Node<T>* get_next_node();
};

template <typename T>
class LinkedList{
    private:
        int size = 0;
        Node<T>* head;
        Node<T>* tail;

        bool set_head(Node<T>* _node);
        bool set_tail(Node<T>* _node);
        Node<T>* get_head();
        Node<T>* get_tail();
    
        void increment_list_size();
        void decrement_list_size();
        
    public:
        LinkedList();
        
        int get_list_size();

        bool push_back(T _value);
        
        bool pop_back();

        void print_list();
};