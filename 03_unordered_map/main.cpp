#include <iostream>
#include <vector>
#include <random>
#include <unordered_map>


extern "C"
void * get_unordered_map()
{
    auto * mapping = new std::unordered_map<std::string, int>();
    (*mapping)["ABC"] = 0;
    (*mapping)["CDF"] = 1;
    return (void *) mapping;
}


extern "C"
void print_unordered_map(void * mapping)
{
    for (auto pair : * (std::unordered_map<std::string, int> *) mapping)
        std::cout << "(" << pair.first << ", " << pair.second << "), "; 
    std::cout << std::endl;
}


extern "C"
int get(void * mapping, char * key)
{
    return (* (std::unordered_map<std::string, int> *) mapping).at(key);
}