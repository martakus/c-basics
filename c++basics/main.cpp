//
//  Markus Foote
//  u0717506
//
//  Created by Markus Foote on 9/10/14.
//  Copyright (c) 2014 Markus Foote. All rights reserved.
//

#include "functions.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Power Test:" << endl;
    for (int n = 1; n < 11; n++) {
        cout << positivePower(1.5, n) << endl;
    }
    cout << endl << "Almost Equal Test:" << endl;
    cout << nearlyEqual(0.00000000011, 0.0000000002, 0.0000000001) << endl;
    cout << nearlyEqual(0.0000000002, 0.00000000011, 0.0000000001) << endl;
    cout << nearlyEqual(0.0000000004, 0.0000000004, 0.0000000001) << endl;
    cout << nearlyEqual(10, 20, 15) << endl;
}
