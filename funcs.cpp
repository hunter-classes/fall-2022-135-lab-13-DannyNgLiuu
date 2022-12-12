
#include <iostream>

std::string printRange(int left, int right) {
    std::string s;
    if(left <= right) {
        return std::to_string(left) + " " + printRange(left+1,right);
    }
    return s;
}

int sumRange(int left, int right) {
    if(left > right) {
        return 0;
    }
    return sumRange(left+1,right) + left;
}

int sumArray(int *arr, int size) {
    if(size < 0) {
        return 0;
    }
    return arr[size-1] + sumArray(arr, size-1);
}

bool isAlphanumeric(std::string s) {
    if(s.length()-1 < 1) {
        return true;
    }
    return isalnum(s[s.length()-1]) && isAlphanumeric(s.substr(0,s.length()-1));
}

bool nestedParens(std::string s) {
    if(s == "\"\"") {
        return true;
    }
    //std::cout << s.substr(s.length()-1, s.length()) << "\n";
    if(s.substr(0,1) == "\"" && s.substr(s.length()-1, s.length()) == "\"") {
        s = s.substr(1,s.length()-2);
        std::cout << s << "\n";
    }
    if(s.substr(0,1) == "(" && s.substr(s.length()-1,s.length()) == ")") {
        if(s.length()-1 == 1) {
            return true;
        }
        return nestedParens(s.substr(1,s.length()-2));
    } else {
        return false;
    }
    return false;
}