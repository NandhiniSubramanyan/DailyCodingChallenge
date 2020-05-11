#pragma once
#ifndef DAY2_H
#define DAY2_H

#include<iostream>
#include<vector>
#include<numeric>

class MultiplicationArray{
    public:
    struct multiply_array_input{
        std::vector<int> multiply_array;
    }multiply_input;
    int *returned_array;
    std::vector<int> multiplication_array(std::vector<int>multiply_array) const;
};

#endif