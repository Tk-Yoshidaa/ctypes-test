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


// int MAX = 101;

// extern "C"
// int * get_vector(int & n, int seed)
// {
//     // std::mt19937 rng(seed);
//     // n = std::uniform_int_distribution<>(1, MAX)(rng);
//     std::cout << "n=" << n << std::endl;

//     // auto * vec = new std::vector<int>(n);
//     // for (int i = 0; i < n; ++i)
//     //     (*vec)[i] = std::uniform_int_distribution<>(1, MAX)(rng);
//     // return vec->data();
//     return &n;
// }

// extern "C"
// void free_vector(int * vec)
// {
//     delete[] vec;
// }