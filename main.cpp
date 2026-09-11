/********************************************
Program: MathTutorV1
Programmers: Jacob Karsky, Treven Keen
Date: 2026.09.13
Github Repo: https://github.com/KeenDevelopmentStudio/MathTutorV1.1
Description:
*********************************************/

#include <iostream>
using namespace std;

int main() {

    string userName = "unkown";
    int userAnswer = 0;

    cout << "************************************************************" << endl;

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

    cout << "Here are some fun facts about math:" << endl;
    cout << "     - Greek artists used math to properly size their sculptures." << endl;
    cout << "     - Computers hate dividing by zero and it will often kill the program." << endl;
    cout << "     - The current number system used in english is base 10, hexadecimal uses base 16." << endl;
    cout << "     - Most complex math equations can be solved easily by using a formula." << endl << endl;

    cout << "************************************************************" << endl << endl;

    cout << "What is your name? ";
    cin >> userName;
    cout << "Hello " << userName << "!" << endl;
    cout << "Welcome to the Silly Simple Math Tutor V1" << endl;
    cout << "What is 2 + 3 = ";
    cin >> userAnswer;
    cout << endl;

    cout << "This is all the program does at the moment." << endl;
    cout << "Version 2 is coming soon" << endl;

    return 0;
}