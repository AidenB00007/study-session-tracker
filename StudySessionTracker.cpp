//
// Exam study logger
// Version 1
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Declared variables
    int session_count = 1;
    float totalminutes = 0, average_time, study_time, study_goal;
    string subject;
    char again = 'y';

    // Questions and stored answer about studying
    cout << "What is your study goal in minutes?\n";
    cin >> study_goal;

    cout << "\nHow many minutes did you study for today?\n";
    cin >> study_time;

    totalminutes = totalminutes + study_time;

    cin.ignore();

    cout << "\nWhat subject did you study today?\n";
    getline(cin, subject);

    // Printed session statistics table
    cout << "\nSession " << session_count << " Log"
         << fixed << setprecision(2) << left << setw(25) << "\t\nGoal: " << study_goal << " Minute(s)"
         << setw(25) << "\t\nTime Studied: " << study_time << " Minute(s)"
         << setw(25) << "\t\nSubject: " << subject
         << setw(25) << "\t\nTotal Time: " << totalminutes << " Minute(s)"
         << setw(25) << "\t\nAverage Time: " << study_time << " Minute(s)" << "\n";

    // If / else statements determine whether the user hit their goal.
    if (study_goal <= -1 || study_time <= -1)
        cout << "\n\nError, Cannot process negative time\n";
    else if (study_goal <= study_time)
        cout << "\n\nYou hit your goal!\n";
    else if (study_goal > study_time)
        cout << "\n\nYou did not hit your goal, you need " << study_goal - study_time << " minute(s).\n";

    // Option to log another session
    cout << "Would you like to log another session? (Y/N)\n";
    cin >> again;

    while ('y' == again || 'Y' == again)
    {
        session_count = session_count + 1;

        cout << "What is your study goal in minutes?\n";
        cin >> study_goal;

        cout << "\nHow many minutes did you study for today?\n";
        cin >> study_time;

        totalminutes = study_time + totalminutes;
        average_time = totalminutes / session_count;

        cin.ignore();

        cout << "\nWhat subject did you study today?\n";
        getline(cin, subject);

        cout << "\nSession " << session_count << " Log"
             << fixed << setprecision(2) << left << setw(25) << "\t\nGoal: " << study_goal << " Minute(s)"
             << setw(25) << "\t\nTime Studied: " << study_time << " Minute(s)"
             << setw(25) << "\t\nSubject: " << subject
             << setw(25) << "\t\nTotal Time: " << totalminutes << " Minute(s)"
             << setw(25) << "\t\nAverage Time: " << average_time << " Minute(s)" << "\n";

        if (study_goal <= -1 || study_time <= -1)
            cout << "\n\nError, Cannot process negative time\n";
        else if (study_goal <= study_time)
            cout << "\n\nYou hit your goal!\n";
        else if (study_goal > study_time)
            cout << "\n\nYou did not hit your goal, you need " << study_goal - study_time << " minute(s).\n";

        cout << "Would you like to log another session? (Y/N)\n";
        cin >> again;
    }

    return 0;
}
