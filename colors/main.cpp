//
//  main.cpp
//  colors
//
//  Created by abcsds on 31/10/13.
//  Copyright (c) 2013 abcsds. All rights reserved.
//

#include <iostream>
#include "colors.h"

int main(int argc, const char * argv[])
{
    colors game;
    game.play();
    //game.writeToFile("/Users/abcsds/Documents/Programs/XCode/colors/colors/texto.txt");
    //game.readFromFile("/Users/abcsds/Documents/Programs/XCode/colors/colors/texto.txt");
    cout << endl;
    game.printGrid();
    
    return 0;
}

