#include "Day3.h"

int LeastPositiveInteger::least_positive(std::vector<int> input_array) const{
    int it = *max_element(std::begin(input_array), std::end(input_array)); // c++11
    std::vector <bool> missing_find(it + 2, false);
    for(std::size_t i=0; i<input_array.size(); i++){
        if (input_array.at(i) > 0 ){
            missing_find.at(input_array.at(i)) = true;
        }
    }
    for(std::size_t j=1; j<missing_find.size(); j++){
        if (!missing_find.at(j)){
            return j;
        }

    }
}