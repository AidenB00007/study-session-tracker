//
// Exam study logger
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Declared variables
    int session_count = 0, option;
    float totalminutes = 0, average_time, study_time, study_goal;
    string subject;

    // Main menu
    cout << "Hello Welcome To Study Tracker Version 1.1\n"
         << "Please Select An Option\n"
         << "1. Log a study session\n"
         << "2. View summary\n"
         << "3. Exit\n";
    cin >> option;

    // Handle first menu choice
    if (option == 2 && session_count == 0)
    {
        cout << "\nPlease log a session to see summary\n";
        cout << "Please Select An Option\n"
             << "1. Log a study session\n"
             << "2. Exit\n";
        cin >> option;

        if (option == 2)
        {
            return 0;
        }
    }
    else if (option == 3)
    {
        return 0;
    }

    // First study session
    cout << "What is your study goal in minutes?\n";
    cin >> study_goal;

    cout << "\nHow many minutes did you study for today?\n";
    cin >> study_time;

    cin.ignore();

    cout << "\nWhat subject did you study today?\n";
    getline(cin, subject);

    session_count = 1;
    totalminutes = study_time + totalminutes;
    average_time = totalminutes / session_count;

    // Print first session statistics
    cout << "\nSession " << session_count << " Log"
         << fixed << setprecision(2) << left << setw(25)
         << "\t\nGoal: " << study_goal << " Minute(s)"
         << setw(25) << "\t\nTime Studied: " << study_time << " Minute(s)"
         << setw(25) << "\t\nSubject: " << subject
         << setw(25) << "\t\nTotal Time: " << totalminutes << " Minute(s)"
         << setw(25) << "\t\nAverage Time: " << average_time << " Minute(s)\n";

    // Goal result
    if (study_goal <= -1 || study_time <= -1)
    {
        cout << "\nError, Cannot process negative time\n";
    }
    else if (study_goal <= study_time)
    {
        cout << "\nYou hit your goal!\n\n";
    }
    else if (study_goal > study_time)
    {
        cout << "\nYou did not hit your goal, you need "
             << study_goal - study_time << " minute(s).\n";
    }

    // Next option
    cout << "Please Select An Option\n"
         << "1. Log another study session\n"
         << "2. View summary\n"
         << "3. Exit\n";
    cin >> option;

    if (option == 2)
    {
        cout << "You logged " << session_count << " session(s)\n"
             << "With an average time of " << average_time
             << " and a total time of " << totalminutes << " minutes\n";

        cout << "Please Select An Option\n"
             << "1. Log a study session\n"
             << "2. Exit\n";
        cin >> option;
    }

    if (option == 2)
    {
        return 0;
    }
    else if (option == 3)
    {
        return 0;
    }

    // Additional sessions
    while (option == 1)
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
             << fixed << setprecision(2) << left << setw(25)
             << "\t\nGoal: " << study_goal << " Minute(s)"
             << setw(25) << "\t\nTime Studied: " << study_time << " Minute(s)"
             << setw(25) << "\t\nSubject: " << subject
             << setw(25) << "\t\nTotal Time: " << totalminutes << " Minute(s)"
             << setw(25) << "\t\nAverage Time: " << average_time << " Minute(s)\n";

        if (study_goal <= -1 || study_time <= -1)
        {
            cout << "\nError, Cannot process negative time\n";
        }
        else if (study_goal <= study_time)
        {
            cout << "\nYou hit your goal!\n\n";
        }
        else if (study_goal > study_time)
        {
            cout << "\nYou did not hit your goal, you need "
                 << study_goal - study_time << " minute(s).\n";
        }

        cout << "Please Select An Option\n"
             << "1. Log another study session\n"
             << "2. View summary\n"
             << "3. Exit\n";
        cin >> option;

        if (option == 2)
        {
            cout << "You logged " << session_count << " session(s)\n"
                 << "With an average time of " << average_time
                 << " and a total time of " << totalminutes << " minutes\n";

            cout << "Please Select An Option\n"
                 << "1. Log a study session\n"
                 << "2. Exit\n";
            cin >> option;

            if (option == 2)
            {
                return 0;
            }
        }
    }

    return 0;
}
