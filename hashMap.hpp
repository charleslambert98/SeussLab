//
//  hashMap.hpp
//  DrSeuss
//
//  Created by Charles Lambert on 11/4/18.
//  Copyright © 2018 Charles Lambert. All rights reserved.
//

#ifndef hashMap_hpp
#define hashMap_hpp

#include "hashNode.hpp"
#include <stdio.h>
#include <string>

using namespace std;

class hashMap{
    friend class makeSeuss;
    hashNode **map;
    string first;
    int numKeys;
    int mapSize;
    bool h1;
    bool c1;
    int collisionct1;
    int collisionct2;
    
public:
    hashMap(bool hash1, bool coll1);
    void addKeyValue(string k, string v);
    int getIndex(string k);
    int calcHash(string k);
    int calcHash2(string v);
    void getClosestPrime();
    void reHash();
    int collHash1(int h, int i, string k);
    int collHash2(int h, int i, string k);
    int findKey(string k);
    void printMap();
    
};

#endif /* hashMap_hpp */
