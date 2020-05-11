#include "Day2.h"

std::vector<int> MultiplicationArray::multiplication_array(std::vector<int>multiply_array) const {
    std::vector<int> vector_copy;
    std::vector<int> ans_vector;
    for(std::size_t i=0; i<multiply_array.size(); ++i){
        vector_copy = multiply_array;
        vector_copy.erase(vector_copy.begin()+i);
        auto multi = std::accumulate(begin(vector_copy), end(vector_copy), 1, std::multiplies<double>());
        ans_vector.push_back(multi);
    }
    return ans_vector;
}