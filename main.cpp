//
//  main.cpp
//  DrSeuss
//
//  Created by Charles Lambert on 11/4/18.
//  Copyright © 2018 Charles Lambert. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "makeSeuss.hpp"

using namespace std;

int main(){
    srand(time_t(NULL));
    makeSeuss("DrSeuss.txt", "NewSeuss.txt", 0, 0);
    
    return 0;
}
