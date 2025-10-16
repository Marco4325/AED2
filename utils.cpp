#include "utils.hpp"
#include <iostream>
#include <climits>

namespace core{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// POSITION MANIPULATORS                                                                                  //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void swap(int* _vector, int _left, int _right){
        int _temp = _vector[_left];
        _vector[_left] = _vector[_right];
        _vector[_right] = _temp;
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// POSITION ANALYSERS                                                                                  //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int max(int* _vector, int _start, int _end){
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

    int min(int* _vector, int _start, int _end){
        int min = INT_MAX, min_pos;
        for(int i = _end; i > _start; i--){
            int current = _vector[i];

            if(current < min){
                min = current;
                min_pos = i;
            }
        }
        return min_pos;
    }

    void print(int* _vector, int vector_size){
        for(int i = 0; i < vector_size; i++){
            std::cout << _vector[i] << " ";
        }
        std::cout << std::endl;
    }
}