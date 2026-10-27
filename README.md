# Study Session Tracker

A command-line C++ program for logging study sessions, checking study-goal progress, and viewing a summary for the current program run.

## Version 1.1 features

- Main menu: log a session, view a summary, or exit
- Records the subject, goal, and minutes studied
- Supports multiple sessions in one run
- Reports whether the study goal was met
- Tracks total time and average session length
- Stops a summary from appearing before a session exists

## Skills used

- Variables and data types
- Input/output with `cin`, `cout`, and `getline`
- `if` / `else if` decisions
- `while` loops
- Arithmetic and averages
- Output formatting with `iomanip`

## Build and run

```bash
g++ -std=c++17 StudySessionTracker.cpp -o study-session-tracker
./study-session-tracker
```

## Roadmap

- **v1.2:** Save study sessions to a file and further clean up the code.
- **Future:** Functions, stronger input validation, and summaries by subject/date.

## Author

Aiden — first-year Computer Science student building C++ projects.
