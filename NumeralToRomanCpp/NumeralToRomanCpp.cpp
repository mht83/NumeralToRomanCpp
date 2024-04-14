//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <string>
#include <map>

std::string int_to_roman(int num) {
    std::map<int, std::string, std::greater<int>> roman = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    std::string result="";
    for ( auto x : roman) {
        while (num >= x.first) {
            num -= x.first;
            result += x.second;
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a number: ";
    int numeric;
    std::cin >> numeric;
    std::cout << "In Roman numeral order that number is: " << int_to_roman(numeric) << std::endl;
    return 0;
}
