#pragma once
#include <iostream>
#include <span>

template <typename T>
void printArray(std::span<T> arr){
    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << ", ";
    }
}