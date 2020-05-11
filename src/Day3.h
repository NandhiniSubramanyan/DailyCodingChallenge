#pragma once
#ifndef DAY3_H
#define DAY3_H

#include <iostream>
#include <vector>
#include <algorithm>

class LeastPositiveInteger{
    public:
    struct input_to_least{
        std::vector<int> input_array;
    }input_positive_least;
    int least_positive(std::vector<int>input_array) const;
};

#endif