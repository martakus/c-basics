//
//  Markus Foote
//  u0717506
//
//  Created by Markus Foote on 9/10/14.
//  Copyright (c) 2014 Markus Foote. All rights reserved.
//

#include "functions.h"
#include <iostream>

double positivePower( double base, unsigned int exponent){
    double result = 1;
    for (unsigned int n = 0; n < exponent; n++) {
        result *= base;
    }
    return result;
}

bool nearlyEqual( double num1, double num2, double eps){
    if (eps < 0) {
        std::cerr << "eps is negative!";
        return false;
    }
    if ((num1-num2 > 0 && num1-num2 < eps) || (num2-num1 > 0 && num2-num1 < eps)) {
        return true;
    }
    return false;
}