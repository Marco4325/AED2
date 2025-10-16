#include "BubbleSort.hpp"
#include "..\swap.hpp"

void BubbleSort::sort(int* _vector, int vector_size){
    for(int j = (vector_size - 1); j > 0; j--){
        for(int i = 0; i < j; i++){
            
            if(_vector[i] > _vector[j])
                swap(_vector, i, j);

        }
    }
}