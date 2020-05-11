#pragma once
#ifndef DAY1_H
#define DAY1_H

#include<iostream>
#include<vector>

class ArrayHasTwoIntegers{
    public:
    struct input_to_the_problem{
        int sum_to_be_checked;
        int arr_len;
        std::vector<int> array_list;
    }input_defined;
    bool sum_two(const int n, const int k, std::vector<int>array_list) const;
};

#endif