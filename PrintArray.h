#pragma once
#include <vector>
#include <span>

void printArray(std::vector<int> &array){
    for(int i = 0; i < array.size(); i++){
        std::cout << array[i] << ", ";
    }
}