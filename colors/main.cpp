//
//  main.cpp
//  colors
//
//  Created by abcsds on 31/10/13.
//  Copyright (c) 2013 abcsds. All rights reserved.
//

#include <iostream>
#include "colors.h"


void display();

int main(int argc, char **argv)
{
    // Initialize glut and openGL
    glutInit(&argc,argv);
    glutInitWindowPosition(200, 300);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    // Create window
    glutCreateWindow("Colors");
    
    // Setup glut Callback functions
    glutDisplayFunc(display);
    
    // Enter main loop
    glutMainLoop();
    
    
    
    colors game;
    game.play();
    //game.writeToFile("/Users/abcsds/Documents/Programs/XCode/colors/colors/texto.txt");
    //game.readFromFile("/Users/abcsds/Documents/Programs/XCode/colors/colors/texto.txt");
    cout << endl;
    game.printGrid();
    
    return 0;
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    
    glutSwapBuffers();
}

