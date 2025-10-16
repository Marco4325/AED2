#include "SelectionSort.hpp"
#include <iostream>

int main(){

    
    int vector_size = 10, vector[vector_size] = {3, 0, 2, 6, 5, -2, 8, -5, 9, 7};
    SelectionSort::sort(vector, vector_size);
    for( int i = 0; i < vector_size; i++){
        std::cout << vector[i] << " ";
    }

return 0;}