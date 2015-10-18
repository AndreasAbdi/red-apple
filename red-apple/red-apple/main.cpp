//
//  main.cpp
//  red-apple
//
//  Created by Andreas Abdi on 2015-10-17.
//  Copyright © 2015 aabdi. All rights reserved.
//

#include "mainHeader.h"
INITIALIZE_EASYLOGGINGPP

/*
 In theory what this should do:
 1. Start a mainLoop.
 2. Wait for a the user to start giving it information to process.
 3. Process this information.
 4. Try to give the user whatever it is that they wanted.
 5. Restart loop.
 */

void setupLogs() {
    //Set up the logs
    // Load configuration from file
    el::Configurations conf("/");
    // Reconfigure single logger
    el::Loggers::reconfigureLogger("default", conf);
    // Actually reconfigure all loggers instead
    el::Loggers::reconfigureAllLoggers(conf);
    // Now all the loggers will use configuration from file
}

void start() {
    //TODO: Do start up here.
}

//This gets the user input.
std::string getUserQuery() {
    //TODO:Get the user query here.
    return NULL;
}

//This parses the query
bool parseQuery(std::string query) {
    //TODO: Parse the query here
    bool queryParsed = false;
    return queryParsed;
}

void mainLoop() {
    // TODO: It might be nice to practice some multithreading again.
    //============VARIABLE DECLARATION=============
    bool doMainLoop = true;
    bool terminateCondition = false;
    std::string query = NULL;
    
    //
    LOG(INFO) << "First LOG element in boot of Red Apple.";
    std::cout << "Welcome to the Red Apple!!\nHow can we feed you today? \n";
    
    // 1. Start a mainLoop.
    while(doMainLoop){
        start();
        query = getUserQuery();
        terminateCondition = parseQuery(query);
        if(terminateCondition){
            doMainLoop = false;
        }
    }
    // 2. Wait for a the user to start giving it information to process.
    std::cout << "Exiting main loop here.\n";
   
}


int main(int argc, const char * argv[]) {
    mainLoop();
    return 0;
}
