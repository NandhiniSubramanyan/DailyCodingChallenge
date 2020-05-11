#pragma once
#ifndef DAY4_H
#define DAY4_H

#include <iostream>
#include<string>
#include <unordered_map>

class DecodeMessage{
    public:
    std::string input_message;
    int decode_number(std::string input_message) const;
};

#endif