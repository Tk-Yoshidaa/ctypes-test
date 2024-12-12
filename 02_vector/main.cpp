#include <iostream>
#include <vector>
#include <random>


extern "C"
const int * get_vector_data(size_t * size, int seed)
{
    auto MAX = 8u;
    std::mt19937 rng(seed);
    *size = std::uniform_int_distribution<>(1, MAX)(rng);

    std::vector<int>* vec = new std::vector<int>(*size);
    for (auto i = 0u; i < *size; ++i)
        (*vec)[i] = std::uniform_int_distribution<>(1, MAX)(rng);
    return vec->data();
}


extern "C"
void free_vector_data(const int * data)
{
    delete[] data;
}