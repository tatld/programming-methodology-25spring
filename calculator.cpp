#include "calculator.h"
#include <stdexcept>
#include <limits>

int Calculator::add(int a, int b) {
    if(b>0 && a>std::numeric_limits<int>::max()-b)throw std::overflow_error("");
    if(b<0 && a<std::numeric_limits<int>::min()-b)throw std::overflow_error("");
    return a+b;
}

int Calculator::sub(int a, int b) {
    
    if(b<0 && a>b+std::numeric_limits<int>::max())throw std::overflow_error("");
    if(b>0 && a<b+std::numeric_limits<int>::min())throw std::overflow_error("");
    return a-b;
}

int Calculator::mul(int a, int b) {
    
    if(a>0 && a>std::numeric_limits<int>::max()/b)throw std::overflow_error("");
    if(a<0 && a<std::numeric_limits<int>::min()/b)throw std::overflow_error("");
    return a*b;
}

int Calculator::div(int a, int b) {
    if(b==0)throw std::invalid_argument("");
    if(b==-1 && a==std::numeric_limits<int>::min())throw std::overflow_error("");
    return a/b;
    
}