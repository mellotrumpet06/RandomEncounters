



#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream> 

using namespace std;

int main() {

    // figure out how to open text file to be able to read

    // define variables
    int partyLevel;
    string environment;
    string examplesOrRandom;

    // input party level from user
    cout << "What is the level of your party? ";
    cin >> partyLevel;

    // input environment from user
    cout << "What environment is your party in? (swamp, forest, city, town) ";
    cin >> environment;

    // ask user if they want examples or a random encounter
    cout << "Would you like examples of encounters in a " << environment << ", or would you want a random encounter? Type 'examples' or 'random': ";
    cin >> examplesOrRandom;

    // maybe make a second function on getting encounters based on environment? How to do that? For now I am writing it solely in main bc idk how to do functions yet
    if (examplesOrRandom == "random") {
        if (environment == "swamp") {
            int randomNumber = (rand() % 20) + 1; // having an issue where it selects the same number every time, fix that
            cout << "You rolled a " << randomNumber << endl;
            if (randomNumber == 1) {
                // figure out how to pull from text file
                cout << "Random encounter";
            }
            // rinse and repeat for other 19 possible encounters
            
        }
        // repeat for other types of environments
    
    } // where random ends

    if (examplesOrRandom == "examples") {
        if (environment == "swamp") {
            cout << "Here's a list of encounters for a swamp: " << endl;
            // figure out how to pull multiple lines from text file
        }
        if (environment == "forest") {
            cout << "Here's a list of encounters for a forest: " << endl;
            // figure out how to pull multiple lines from text file
        }
        if (environment == "town") {
            cout << "Here's a list of encounters for a town: " << endl;
            // figure out how to pull multiple lines from text file
        }
        if (environment == "city") {
            cout << "Here's a list of encounters for a city: " << endl;
            // figure out how to pull multiple lines from text file
        }


    } // where examples ends

} // where main ends