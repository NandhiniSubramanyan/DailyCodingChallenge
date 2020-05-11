#include "Day1.h"

bool ArrayHasTwoIntegers::sum_two(const int arr_len, const int sum_to_be_checked, std::vector<int>array_list) const {
    bool returned_value;
    for (int i= 0; i<arr_len; i++){
        for (int j=i+1; j<arr_len; j++){
            if ((array_list.at(i) + array_list.at(j)) == sum_to_be_checked){
                returned_value = true;
                goto end_the_iteration;
            }
            else{
                returned_value = false;
            }
        }
    }
    end_the_iteration:
    return returned_value;
}
