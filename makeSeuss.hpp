//
//  makeSeuss.hpp
//  DrSeuss
//
//  Created by Charles Lambert on 11/4/18.
//  Copyright © 2018 Charles Lambert. All rights reserved.
//

#ifndef MAKESEUSS_HPP_
#define MAKESEUSS_HPP_

#include "hashMap.hpp"
#include <iostream>

using namespace std;

class makeSeuss {
    hashMap *ht;
    string fn;
    string newfile;
    
public:
    makeSeuss(string file,string newf,bool h1, bool c1);
    void readFile();
    void writeFile();
};

#endif /* makeSeuss_hpp */
