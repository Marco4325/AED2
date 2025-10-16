#include "swap.hpp"

void swap(int* _vector, int _left, int _right){
    int _temp = _vector[_left];
    _vector[_left] = _vector[_right];
    _vector[_right] = _temp;
}