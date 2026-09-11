/********************************************
Program: MathTutorV1
Programmers: Jacob Karsky, Treven Keen
Date: 2026.09.13
Github Repo: https://github.com/KeenDevelopmentStudio/MathTutorV1.1

Description:
   This program asks the user what their name is and welcomes them!
   It will also tell them some math fun facts and present them with some cool ASCII art.
   They will be asked a math question which will be checked with an if statement in a later mathTutor.
*********************************************/

// Allows the use of ConsoleIn and ConsoleOut.
#include <iostream>

// Declares the namespace for this program.
using namespace std;

int main() {

    // Initializing Variables
    string userName = "placeholder";
    int userAnswer = 0;

    cout << "************************************************************" << endl;

    // ASCII Art
    cout << R"(
     ____  _ _ _         ____  _                 _
    / ___|(_) | |_   _  / ___|(_)_ __ ___  _ __ | | ___
    \___ \| | | | | | | \___ \| | '_ ` _ \| '_ \| |/ _ \
     ___) | | | | |_| |  ___) | | | | | | | |_) | |  __/
    |____/|_|_|_|\__, | |____/|_|_| |_| |_| .__/|_|\___|
     __  __      |___/_       _____      _|_|
    |  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __
    | |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
    | |  | | (_| | |_| | | |   | || |_| | || (_) | |
    |_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|    )"  << endl << endl;

    cout << "************************************************************" << endl;

    cout << "         Welcome to the Silly Simply Math Tutor V1" << endl;

    cout << "************************************************************" << endl << endl;

    // Random fun math facts
    cout << "Here are some fun facts about math:" << endl;
    cout << "     - Greek artists used math to properly size their sculptures." << endl;
    cout << "     - Computers hate dividing by zero and it will often kill the program." << endl;
    cout << "     - The current number system used in english is base 10, hexadecimal uses base 16." << endl;
    cout << "     - Most complex math equations can be solved easily by using a formula." << endl << endl;

    cout << "************************************************************" << endl << endl;

    // Name user input
    cout << "What is your name?" << endl;
    cin >> userName;
    cout << endl;

    // Repeat name with welcome
    cout << "Hello " << userName << "!" << endl;
    cout << "Welcome to the Silly Simple Math Tutor V1!" << endl;

    // Ask math question & user math input
    cout << "What is the answer to 2 + 3?" << endl;
    cin >> userAnswer;
    cout << endl;

    // Explain end of program
    cout << "This is all the program does at the moment." << endl;
    cout << "Version 2 is coming soon!" << endl;

    return 0;
}