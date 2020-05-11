#include "Day4.h"

int DecodeMessage::decode_number(std::string input_message) const{
    int possibilities;
    if (input_message[0] == '0'){
        possibilities = 0;
    }
    else if (input_message.length() == 0){
        possibilities = 1;
    }
    else if (input_message.find("0") != std::string::npos){
        possibilities = 0;
        for (int i=0; i<input_message.length()-1; i++){
            std::string check_string = input_message.substr(i, 2);
            if (std::stoi(check_string) <=26 && check_string[0] != '0'){
                possibilities += 1;
            }
        }
    }
    else{
        possibilities = 1;
    
        for (int i=0; i<input_message.length()-1; i++){
            std::string check_string = input_message.substr(i, 2);
            if (std::stoi(check_string) <=26 && check_string[0] != '0'){
                possibilities += 1;
            }
        }
    }
    return possibilities;
}