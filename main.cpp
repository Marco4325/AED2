#include "SelectionSort\SelectionSort.hpp"
#include "BubbleSort\BubbleSort.hpp"
#include <iostream>

int main(){

    int vector_size = 10, vector_selection[vector_size] = {3, 0, 2, 6, 5, -2, 8, -5, 9, 7};
    SelectionSort::sort(vector_selection, vector_size);
    for( int i = 0; i < vector_size; i++){
        std::cout << vector_selection[i] << " ";
    }

    std::cout << "\n\n\n";

    int vector_bubble[vector_size] = {3, 0, 2, 6, 5, -2, 8, -5, 9, 7};
    BubbleSort::sort(vector_bubble, vector_size);
    for( int i = 0; i < vector_size; i++){
        std::cout << vector_bubble[i] << " ";
    }


return 0;}