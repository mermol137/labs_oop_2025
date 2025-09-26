#include <iostream>
#include "func.h"

int main() {
    std::string str;
    std::cin >> str;

    std::string otvet = func(str);
    std::cout << otvet << std::endl;

    return 0;
}
