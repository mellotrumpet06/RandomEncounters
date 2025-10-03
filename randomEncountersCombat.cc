/**
 *        @file: randomEncountersCombat.cc
 *      @author: Rowan Williams
 *        @date: September 30, 2025
 *       @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

///function prototypes
int xpThreshold(int level, int number, string difficulty);
int randomEncounter(int environment, int randomNumber);
void levelUpEncounter(int xpThreshold, int encounterNumber);

int main(int argc, char const *argv[]) {

   srand(time(nullptr));

    // define variables
    int partyEnvironment;
    int partyLevel;
    int partyNumber;
    string difficulty;
    int randomNumber = rand() % 3 + 1; // random number 1-4, can update with more later

    // ask user party level
    cout << "What level is your party? ";
    cin >> partyLevel;
    // ask party number
    cout << "How many players are in your party? ";
    cin >> partyNumber;
    // ask difficulty level
    cout << "What difficulty do you want the encounter to be? (ex: easy, medium, hard, deadly) "; 
    cin >> difficulty;
    // ask user party environment
    cout << "What environment is your party in? \n1: Swamp\n2: Forest\n3: City\n4: Mountains" << endl;
    cin >> partyEnvironment;
    
    int threshold = xpThreshold(partyLevel, partyNumber, difficulty);
    cout << "XP Threshold: " << threshold << endl;

    int encounter = randomEncounter(partyEnvironment, randomNumber);
    cout << "Encounter Number: " << encounter << endl;

    levelUpEncounter(threshold, encounter);
   return 0;
}// main

int xpThreshold(int level, int number, string difficulty) {
    int xpThreshold;
    switch (level) {
        case 1:
            if (difficulty == "easy" || difficulty == "Easy") {
                xpThreshold = 25;
            }
            else if (difficulty == "medium" || difficulty == "Medium") {
                xpThreshold = 50;
            }
            else if (difficulty == "hard" || difficulty == "Hard") {
                xpThreshold = 75;
            }
            else if (difficulty == "deadly" || difficulty == "Deadly") {
                xpThreshold = 100;
            }
            break;
            
        case 2:
            if (difficulty == "easy" || difficulty == "Easy") {
                xpThreshold = 50;
            }
            else if (difficulty == "medium" || difficulty == "Medium") {
                xpThreshold = 100;
            }
            else if (difficulty == "hard" || difficulty == "Hard") {
                xpThreshold = 150;
            }
            else if (difficulty == "deadly" || difficulty == "Deadly") {
                xpThreshold = 200;
            }
            break;
        case 3:
            if (difficulty == "easy" || difficulty == "Easy") {
                xpThreshold = 75;
            }
            else if (difficulty == "medium" || difficulty == "Medium") {
                xpThreshold = 150;
            }
            else if (difficulty == "hard" || difficulty == "Hard") {
                xpThreshold = 225;
            }
            else if (difficulty == "deadly" || difficulty == "Deadly") {
                xpThreshold = 400;
            }
            break;
        case 4:
            if (difficulty == "easy" || difficulty == "Easy") {
                xpThreshold = 125;
            }
            else if (difficulty == "medium" || difficulty == "Medium") {
                xpThreshold = 250;
            }
            else if (difficulty == "hard" || difficulty == "Hard") {
                xpThreshold = 375;
            }
            else if (difficulty == "deadly" || difficulty == "Deadly") {
                xpThreshold = 500;
            }
            break;
        case 5:
            if (difficulty == "easy" || difficulty == "Easy") {
                xpThreshold = 250;
            }
            else if (difficulty == "medium" || difficulty == "Medium") {
                xpThreshold = 500;
            }
            else if (difficulty == "hard" || difficulty == "Hard") {
                xpThreshold = 750;
            }
            else if (difficulty == "deadly" || difficulty == "Deadly") {
                xpThreshold = 1100;
            }
            break;
            default:
                cout << "Input level has not yet been implemented." << endl;
    }
    xpThreshold = xpThreshold * number;
    return xpThreshold;
}
int randomEncounter(int environment, int randomNumber) {
    int result;
    switch (environment) {
        case 1: // four possible encounters for the swamp environment
            if (randomNumber == 1) result = 1; // goblins attack
            else if (randomNumber == 2) result = 2; // hag attacks
            else if (randomNumber == 3) result = 3; // plants come alive
            else if (randomNumber == 4) result = 4;
            break;
        case 2:
            if (randomNumber == 1) result = 5;
            else if (randomNumber == 2) result = 6;
            else if (randomNumber == 3) result = 7;
            else if (randomNumber == 4) result = 8;
            break;
        case 3:
            if (randomNumber == 1) result = 9;
            else if (randomNumber == 2) result = 10;
            else if (randomNumber == 3) result = 11;
            else if (randomNumber == 4) result = 12;
            break;
        case 4:
            if (randomNumber == 1) result = 13;
            else if (randomNumber == 2) result = 14;
            else if (randomNumber == 3) result = 15;
            else if (randomNumber == 4) result = 16;
            break;
    }
    return result;
}
void levelUpEncounter(int xpThreshold, int encounterNumber) {
    switch (encounterNumber) {
        case 1: { //goblins in the swamp
            int goblinXP = 50;
            int goblinNumber = 1;
            int adjustedXP = xpThreshold;
            double multiplier = 1.0;
            while (abs(adjustedXP-xpThreshold) > 100) {
                adjustedXP = goblinNumber * goblinXP * multiplier;
                goblinNumber++;
                if (goblinNumber == 2) multiplier = 1.5;
                if (goblinNumber >= 3 && goblinNumber <= 6) multiplier = 2.0;
                if (goblinNumber >= 7 && goblinNumber <= 10) multiplier = 2.5;
                if (goblinNumber >= 11 && goblinNumber <= 14) multiplier = 3.0;
                else multiplier = 4.0;
            }
            int difference = adjustedXP - xpThreshold;
            if (difference > 100 && difference <= 500) {
                cout << goblinNumber << " Goblins add up to " << adjustedXP << " XP. Adjust goblin HP down to make the encounter slightly less challenging." << endl;
            }
            else if (difference > 500) {
                cout << goblinNumber << " Goblins add up to " << adjustedXP << " XP. Adjust goblin stat blocks and environmental factors to favor the party. Encounter is too challenging (" << difference << " XP higher than desired)." << endl;
            }
            else {
                cout << "Encounter balanced successfully at " << adjustedXP << " XP." << endl;
            }
            break;
        } // end of case 1
        default : 
            cout << "Encounter not yet implemented." << endl;
    } // end of switch
} // end of function