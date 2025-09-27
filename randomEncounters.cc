//

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{ // ****for now, set up environments, add levels later****
    srand(time(nullptr));
    // open file encounters.txt
    ifstream in_file;
    in_file.open("encounters.txt"); // not done yet
    // define variables
    int party_environment;

    // ask user party level
    // ask user party environment (using switch?)
    cout << "What environment is your party in? \n1: Swamp\n2: Forest\n3: City\n4: Mountains" << endl;
    cin >> party_environment;
    int random_value = rand() % 100 + 2;
    switch (party_environment)
    {
    case 1: {
        cout << "Here's a random encounter for the swamp setting: " << endl;
        // pull random encounter from txt file
        string line;
        int lineNumber = 0;
        int wantedLine = random_value;
        while (getline(in_file, line))
        {
            lineNumber++;
            if (lineNumber == wantedLine)
            {
                cout << line << endl;
            }
        }
        break;
    }
    case 2: {
        cout << "Here's a random encounter for the forest setting:" << endl;
        string line;
        int lineNumber = 0;
        int wantedLine = random_value + 102;
        while (getline(in_file, line))
        {
            lineNumber++;
            if (lineNumber == wantedLine)
            {
                cout << line << endl;
            }
        }
        break;
    }
    case 3: {
        cout << "Here's a random encounter for the city setting:" << endl;
        string line;
        int lineNumber = 0;
        int wantedLine = random_value + 204;
        while (getline(in_file, line))
        {
            lineNumber++;
            if (lineNumber == wantedLine)
            {
                cout << line << endl;
            }
        }
        break;
    }
    case 4: {
        cout << "Here's a random encounter for the mountains setting:" << endl;
        string line;
        int lineNumber = 0;
        int wantedLine = random_value + 306;
        while (getline(in_file, line))
        {
            lineNumber++;
            if (lineNumber == wantedLine)
            {
                cout << line << endl;
            }
        }
        break;
    }
    }

}

// level up/down encounter depending on party level (make a function for this?)
