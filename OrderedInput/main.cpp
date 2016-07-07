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
    string val1, val2, val3;
    string small = " ", medium = " ", large = " ";
    
    cout << "Please enter three words, separated by spaces: ";
    cin >> val1 >> val2 >> val3;
    
    
    if (val1.compare(val2) < 0 && val1.compare(val3) < 0)
        small = val1;
    else if (val2.compare(val1) < 0 && val2.compare(val3) < 0)
        small = val2;
    else
        small = val3;
    
    if (val1.compare(val2) > 0 && val1.compare(val3) > 0)
        large = val1;
    else if (val2.compare(val1) > 0 && val2.compare(val3) > 0)
        large = val2;
    else
        large = val3;
    
    if (small.compare(val1) < 0 && large.compare(val1) > 0)
        medium = val1;
    else if (small.compare(val2) < 0 && large.compare(val2) > 0)
        medium = val2;
    else
        medium = val3;
    
    cout << small << " " << medium << " " << large << "\n";
    return 0;
}
