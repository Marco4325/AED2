#include "SelectionSort.hpp"
#include "utils.hpp"
#include <climits>

void SelectionSort::sort(int* _vector, int vector_size, bool use_max_function){
    
    if(use_max_function){

        for(int i = (vector_size - 1); i > 0; i--){
            int bigger = core::max(_vector, 0, i);
            core::swap(_vector, bigger, i);
        }

    }else{

        for(int i = (vector_size - 1); i > 0; i--){
            int lower = core::min(_vector, 0, i);
            core::swap(_vector, lower, i);
        }

    }

    core::print(_vector, vector_size);
};