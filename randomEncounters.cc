//

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main () {   // ****for now, set up environments, add levels later****
    // open file encounters.txt
    ifstream inFile("encounters.txt");
    // check for successful opening
    if (inFile.is_open()) {
        // file opened successfully
    }
    else {
        // error opening file
    }
    // reading lines from file
    string encounter;
    getline(inFile, encounter); // How do you know what line you're reading, how do you use this?

    // define variables
    int party_environment;

    // ask user party level

    // ask user party environment (using switch?)
    cout << "What environment is your party in? \n1: Swamp\n2: Forest\n3: City\n4: Town" << endl;
    cin >> party_environment;
    switch (party_environment) {
        case 1:
            cout << "Here's a random encounter for the swamp setting: " << endl;
            // pull random encounter from txt file
            int random_value = rand() % 100 + 1;
            
        // continue cases once you figure out how to pull from txt file
        
    }
    
    // level up/down encounter depending on party level (make a function for this?)



}