//
//  colors.h
//  colors
//
//  Created by abcsds on 31/10/13.
//  Copyright (c) 2013 abcsds. All rights reserved.
//

#ifndef __colors__colors__
#define __colors__colors__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <cctype>

using namespace std;
class colors {
private:
    vector<char> grid;
    bool ready;
public:
    colors();
    ~colors();
    
    int readFromFile(string s);
    int writeToFile(string s);
    
    int scramble();
    void printGrid();
    bool isReady();
    bool isOver();
    
    int rule(int i);

    
    void play();
    
};

#endif /* defined(__colors__colors__) */
