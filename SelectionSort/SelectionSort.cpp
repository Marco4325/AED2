#include "SelectionSort.hpp"
#include "..\swap.hpp"
#include <climits>

int SelectionSort::max(int* _vector, int _start, int _end){
    int max = INT_MIN, max_pos;
    for(int i = _start; i <= _end; i++){
        int current = _vector[i];

        if(current > max){
            max = current;
            max_pos = i;
        }
    }
    return max_pos;
};

void SelectionSort::sort(int* _vector, int vector_size){
    for(int i = (vector_size - 1); i > 0; i--){
        int bigger = max(_vector, 0, i);
        swap(_vector, bigger, i);
    }
};