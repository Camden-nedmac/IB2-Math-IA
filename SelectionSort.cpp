#include <iostream>
#include <vector>
#include <span>
#include <random>
#include "RandomArray.h"
#include "PrintArray.h"
using namespace std;

// Selection sort works by figuratively splitting the main array into two sub-arrays
// (sub-array 1 being sorted, 2 being unsorted), and iteratively swapping values from sub-array 2 to 1. 
// The algorithm iterates through the second and appends the smallest found value to
// the end of the first by swapping indexes with the value directly after the end of the first.
// For a more gooder explanation: https://en.wikipedia.org/wiki/Selection_sort
void selectionSort(vector<int> &array){

    int size = array.size();

    for(int i = 0; i < size; i++){
        int currentMinIndex = i;
        // find index of the next smallest value
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[currentMinIndex]){
                currentMinIndex = j;
            }
        }
        // move the next smallest value to the end of sub-array 1
        int temp = array[i];
        array[i] = array[currentMinIndex];
        array[currentMinIndex] = temp;
    }
}

int main(){

    int size;
    cout << "Enter size of random array: " << endl;
    cin >> size;

    vector<int> array = generateRandomArray(size);

    cout << endl;
    selectionSort(array);
    cout<<"ordered array: ";
    printArray(array);
   
    return 0;
}