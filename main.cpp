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
    makeSeuss("/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/DrSeuss.txt", "/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/FalseFalse.txt", 0, 0);
    makeSeuss("/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/DrSeuss.txt", "/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/TrueFalse.txt", 1, 0);
    makeSeuss("/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/DrSeuss.txt", "/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/FalseTrue.txt", 0, 1);
    makeSeuss("/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/DrSeuss.txt", "/Users/clambert/Documents/Fall 2018/CISC220/Lab 5/DrSeuss/DrSeuss/TrueTrue.txt", 1, 1);

    
    return 0;
}
