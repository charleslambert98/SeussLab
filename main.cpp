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
    //srand(time_t(NULL));
    makeSeuss("DrSeuss.txt", "calcHash1_collhash1.txt", 0, 0);
    makeSeuss("DrSeuss.txt", "calcHash2_collhash1.txt", 1, 0);
    makeSeuss("DrSeuss.txt", "calcHash1_collHash2.txt", 0, 1);
    makeSeuss("DrSeuss.txt", "calcHash2_collHash2.txt", 1, 1);

    
    return 0;
}
