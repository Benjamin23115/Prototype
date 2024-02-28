#include <iostream>
// to compile g++ main.cpp -o main

using namespace std;

void stringRemoval()
{
    int stringNum = 1;
    cout << "Input String Number: ";
    cout << stringNum << endl;
    cout << " Deleted string "
         << "\"1: a\"" << endl;
    return;
}

void stringInsert()
{
    string input = "aaa";
    cout << "Input String: ";
    cout << input << endl;
    cout << "String \"" << input << "\" has been added to the list" << endl;
    return;
}

void listTMStrings()
{
    cout << "List of strings to choose from" << endl;
    cout << "1:  a" << endl;
    cout << "2:  ab" << endl;
    cout << "3:  \\" << endl;
    cout << "4:  aaabb" << endl;
    cout << "5:  aaaaaaaaaabbbbbbbbbb" << endl;
    cout << "6:  aabb" << endl;
    cout << "7:  aaaaaabbbbbbb" << endl;
    cout << "8:  ba" << endl;
    cout << "9:  aba" << endl;
    cout << "10: bb" << endl;
    return;
}

void helpCommandOutput()
{
    cout << "D     Delete input string from list" << endl;
    cout << "X     Exit application" << endl;
    cout << "H     Help user" << endl;
    cout << "I     Insert input string into list" << endl;
    cout << "L     List input strings" << endl;
    cout << "Q     Quit operation of Turing machine on input string" << endl;
    cout << "R     Run Turing machine on input string" << endl;
    cout << "E     Set maximum number of transitions to perform" << endl;
    cout << "W     Show status of application" << endl;
    cout << "T     Truncate instantaneous descriptions" << endl;
    cout << "V     View Turing machine" << endl;
}

void runTM()
{
    int inputNum = 2;
    cout << "Input String Number: ";
    cout << inputNum << endl;
    cout << "Inital ID: [s0]ab" << endl;
    cout << "0: [s0]ab" << endl;
    // cout << "1: X[s1]b" << endl;
    // cout << "2: [s2]XY" << endl;
    // cout << "3: X[s0]Y" << endl;
    // cout << "4: XY[s3]" << endl;
    cout << "5: XY-[s4]" << endl;
    cout << "Input String \"ab\" accepted in 5 Transitions" << endl;
    return;
}

void setTMTransitions()
{
    int transitions = 50;
    cout << "Maximum Number of Transitions[30]: ";
    cout << transitions << endl;
    cout << "Setting Changed to " << transitions << endl;
    return;
}

void quitTM()
{
    cout << "5 Transitions Preformed" << endl;
    cout << "String \"ab\" is neither Accepted or Denied" << endl;
}

void truncateTM()
{
    cout << "Number of Cells[32]: 16" << endl;
    cout << "Setting Changed to 16" << endl;
}
void viewTM()
{
    cout << "Q = {s0, s1, s2, s3, s4}" << endl;
    cout << "sigma = {a, b}" << endl;
    cout << "gamma = {a, b, X, Y, -}" << endl;

    cout << endl;

    cout << "delta(s0, a) = (s1, X, R)" << endl;
    cout << "delta(s0, Y) = (s3, Y, R)" << endl;
    cout << "delta(s1, a) = (s1, a, R)" << endl;
    cout << "delta(s1, b) = (s2, Y, L)" << endl;
    cout << "delta(s1, Y) = (s1, Y, R)" << endl;
    cout << "delta(s2, a) = (s2, a, L)" << endl;
    cout << "delta(s2, X) = (s0, X, R)" << endl;
    cout << "delta(s2, Y) = (s2, Y, L)" << endl;
    cout << "delta(s3, Y) = (s3, Y, R)" << endl;
    cout << "delta(s3, -) = (s4, -, R)" << endl;

    cout << endl;

    cout << "q0 = s0" << endl;
    cout << "B = -" << endl;
    cout << "F = {s4}" << endl;
}

void statusOfTM()
{
    cout << "Name of Class: CPTS 322" << endl;
    cout << "Name of Student: Benjamin Farias Dela Mora" << endl;
    cout << "Semester: Spring" << endl;
    cout << "Year: 2024" << endl;
    cout << "Name of Professor: Neil Corrigan" << endl;
    cout << "Version: 1.0.0" << endl;
    cout << endl;

    cout << "Name of Turing Machine: ANBN" << endl;
    cout << "Current Number of Max Transitions: 50" << endl;
    cout << "Current Number of Max Cells: 16" << endl;
    cout << "Status of Turing Machine: Completed Operation on Input String" << endl;
    cout << "Original Input String: ab" << endl;
    cout << "Acceptance/Rejection Status: Accepted" << endl;
    cout << "Number of Transitions Taken to Complete: 5" << endl;
}

int main(int argc, char const *argv[])
{
    bool exitCheck = false;
    char rawCommandInput;
    char parsedCommandInput;
    cout << "TM ANBN successfully loaded!" << endl;
    while (!exitCheck)
    {
        cout << "Command: ";
        cin >> rawCommandInput;
        parsedCommandInput = tolower(rawCommandInput);
        switch (parsedCommandInput)
        {
        case 'd':
            stringRemoval();
            break;
        case 'x':
            exitCheck = true;
            break;
        case 'h':
            helpCommandOutput();
            break;
        case 'i':
            stringInsert();
            break;
        case 'l':
            listTMStrings();
            break;
        case 'q':
            quitTM();
            break;
        case 'r':
            runTM();
            break;
        case 'e':
            setTMTransitions();
            break;
        case 'w':
            statusOfTM();
            break;
        case 't':
            truncateTM();
            break;
        case 'v':
            viewTM();
            break;

        default:
            cout << rawCommandInput << " is an invalid command!" << endl;
            break;
        }
    }
    cout << "Input String File Written" << endl;
    return 0;
}
