#include <iostream>

using namespace std;

void helpCommandOutput()
{
    cout << "Use the upper-case letter to run that command!" << endl;
    cout << "Delete   Delete input string from list" << endl;
    cout << "eXit     Exit application" << endl;
    cout << "Help     Help user" << endl;
    cout << "Insert   Insert input string into list" << endl;
    cout << "List     List input strings" << endl;
    cout << "Quit     Quit operation of Turing machine on input string" << endl;
    cout << "Run      Run Turing machine on input string" << endl;
    cout << "sEt      Set maximum number of transitions to perform" << endl;
    cout << "shoW     Show status of application" << endl;
    cout << "Truncate Truncate instantaneous descriptions" << endl;
    cout << "View     View Turing machine" << endl;
}

int main(int argc, char const *argv[])
{
    bool exitCheck = false;
    char rawCommandInput;
    char parsedCommandInput;

    while (!exitCheck)
    {
        cout << "Command: ";
        cin >> rawCommandInput;
        parsedCommandInput = tolower(rawCommandInput);
        switch (parsedCommandInput)
        {
        case 'd':
            cout << "deleting input string from list" << endl;
            break;
        case 'x':
            exitCheck = true;
            break;
        case 'h':
            helpCommandOutput();
            break;
        case 'i':
            cout << "Inserting input string to list" << endl;
            break;
        case 'l':
            cout << "Listing input strings" << endl;
            break;
        case 'q':
            cout << "Quit TM on input string" << endl;
            break;
        case 'r':
            cout << "Running TM on input string" << endl;
            break;
        case 'e':
            cout << "Setting maximum number of transitions to perform" << endl;
            break;
        case 'w':
            cout << "Showing status of application" << endl;
            break;
        case 't':
            cout << "Truncating instantaneous descriptions" << endl;
            break;
        case 'v':
            cout << "Viewing turing machine" << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}
