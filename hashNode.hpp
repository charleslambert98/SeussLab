//
//  hashNode.hpp
//  DrSeuss
//
//  Created by Charles Lambert on 11/4/18.
//  Copyright © 2018 Charles Lambert. All rights reserved.
//

#ifndef hashNode_hpp
#define hashNode_hpp

#include <stdio.h>
#include <string>

using namespace std;

class hashNode{
    
    friend class hashMap;
    string keyword;
    string *values;
    
    int valuesSize;
    int currSize;
    
public:
    hashNode();
    hashNode(string s);
    hashNode(string s, string v);
    void addValue(string v);
    void dblArray();
    string getRandValue();
    
};

#endif /* hashNode_hpp */
