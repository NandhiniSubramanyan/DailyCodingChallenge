#include "Day5.h"

int LargestSum::largest_sum_non_adjacent(std::vector <int> input_message) const{
    int incl = input_message.at(0);
    int excl = 0;
    int excl_new;
    for (int i=1; i<input_message.size(); i++){
        excl_new = (incl > excl) ? incl : excl;
        incl = excl + input_message.at(i);
        excl = excl_new;
    }
    return ((incl > excl) ? incl : excl);

}