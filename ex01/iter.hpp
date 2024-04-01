#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>

void iter(T* array, size_t array_len, void (*f)(T &)){
    if (!array || !f)
        return ;
    for (size_t i = 0; i< array_len; i++)
        f(array[i]);
}

template<typename U>
void test(U& value){
    value++;
}

#endif