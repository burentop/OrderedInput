//
//  main.cpp
//  OrderedInput
//
//  Created by Brent Perry on 7/5/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"


int main()
{
    int val1, val2, val3;
    int small = 0, medium = 0, large = 0;
    
    cout << "Please enter three whole numbers, separated by spaces: ";
    cin >> val1 >> val2 >> val3;
    
    
    if (val1 < val2 && val1 < val3)
        small = val1;
    else if (val2 < val1 && val2 < val3)
        small = val2;
    else
        small = val3;
    
    if (val1 > val2 && val1 > val3)
        large = val1;
    else if (val2 > val1 && val2 > val3)
        large = val2;
    else
        large = val3;
    
    if (small < val1 && large > val1)
        medium = val1;
    else if (small < val2 && large > val2)
        medium = val2;
    else
        medium = val3;
    
    cout << small << " " << medium << " " << large << "\n";
    return 0;
}
