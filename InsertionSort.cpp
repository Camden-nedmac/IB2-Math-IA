#include <iostream>
#include <vector>
#include <span>
#include <random>
#include <chrono>
#include "RandomArray.h"
#include "PrintArray.h"
using namespace std;

// Iterates through an array swapping the current value with the one to its left until the value to its left is the smaller value,
// Essentially insterting the value into the point where its left neighbour is smaller and right neighbour is larger
// Lesser ungood explanation: https://en.wikipedia.org/wiki/Insertion_sort
void insertionSort(vector<int> &array){
    int size = array.size();
    for(int i = 1; i < size; i++){
        int current = array[i];
        int j = i;
        while(j > 0 && array[j - 1] > current){
            array[j] = array[j - 1];
            j--;
        }
        array[j] = current;
    }
}

int main(){

    int size;
    cout << "Enter array size for insertion sort algorithm: ";
    cin >> size;

    vector<int> array = generateRandomArray(size);

    insertionSort(array);

    printArray(span{array});

    return 0;
}