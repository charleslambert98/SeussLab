//
//  hashNode.cpp
//  DrSeuss
//
//  Created by Charles Lambert on 11/4/18.
//  Copyright © 2018 Charles Lambert. All rights reserved.
//

#include "hashNode.hpp"
#include <stdio.h>

hashNode::hashNode(){
    keyword = "";
    valuesSize = 0;
    currSize = 0;
    values = NULL;
}

hashNode::hashNode(string s){
    keyword = s;
    valuesSize = 100;
    currSize = 0;
    values = new string[valuesSize];
}

hashNode::hashNode(string s, string v) : hashNode::hashNode(s){
    values[currSize] = v;
    currSize = 1;
}

void hashNode::addValue(string v){
    if (currSize < valuesSize){
        values[currSize] = v;
        currSize++;
    }
    else{
        dblArray();
    }
}

void hashNode::dblArray(){
    string newValues[valuesSize*2];
    for (int i = 0; i < currSize; i++){
        newValues[i] = values[i];
    }
    values = newValues;
}

string hashNode::getRandValue(){
    if (currSize > 0){
        return values[rand() % currSize];
    }
    else{
        return "";
    }
}
