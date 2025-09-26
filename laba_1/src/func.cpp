#include "func.h"

std::string func(std::string str) {
    std::string digits = "0123456789";
    std::string result;
    for(int i = 0; i < str.size(); i++){
        if (digits.find(str[i]) != std::string::npos) {
            result += str[i];
        } else if (!result.empty()){
            if (result.back() == ' '){
                continue;
            } else{
                result += ' ';
            }
        }
    }
    return result;
}
