//
//  main.cpp
//  red-apple
//
//  Created by Andreas Abdi on 2015-10-17.
//  Copyright © 2015 aabdi. All rights reserved.
//

#include <iostream>

/*
 In theory what this should do:
 1. Start a mainLoop.
 2. Wait for a the user to start giving it information to process.
 3. Process this information.
 4. Try to give the user whatever it is that they wanted.
 5. Restart loop.
 */
int main(int argc, const char * argv[]) {
    // It might be nice to practice some multithreading again.
    bool doMainLoop = true;
    int i = 1;


    std::cout << "Welcome to the Red Apple!!\n How can we feed you today? \n";
    
    // 1. Start a mainLoop.
    while(doMainLoop){
        std::cout << "I'm doing the main loop." + std::to_string(i) + "\n";
        i++;
        if( i >= 5){
            doMainLoop = false;
        }
    }
    // 2. Wait for a the user to start giving it information to process.
    std::cout << "Exiting main loop here.\n";
    return 0;
}
