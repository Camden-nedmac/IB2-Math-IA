#include "RandomArray.h"
#include <random>
using namespace std;

/// @brief Initializes and returns a vector of random numbers from 1 to 'size'
/// @param size 
/// @return 
vector<int> generateRandomArray(int size){
    vector<int> dataset(size); 
    mt19937 rng(random_device{}()); //seeds the generator
    uniform_int_distribution<int> distribution(1,size);

    //fill array with random values
    for(int i = 0; i < size; i++){
        dataset[i] = distribution(rng);
    }

    return dataset;
}