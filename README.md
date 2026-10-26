# Study Session Tracker

A command-line C++ program that logs study sessions and reports progress toward a study goal.

## Version 1 features

- Records a subject, study goal, and minutes studied
- Tells the user whether they met the goal
- Supports multiple study sessions in one run
- Tracks total study time and average session length

## Skills used

- Variables and data types
- Input/output with `cin`, `cout`, and `getline`
- `if` / `else if` / `else` decisions
- `while` loops
- Arithmetic and averages
- Output formatting with `iomanip`

## Build and run

```bash
g++ -std=c++17 StudySessionTracker.cpp -o study-session-tracker
./study-session-tracker
```

## Development roadmap

This repository is intentionally the first version of an evolving project. Planned improvements include:

1. Refactor repeated code into functions.
2. Improve input validation.
3. Save sessions to a file.
4. Show summaries by subject and date.
5. Add automated tests.

## Author

Aiden — first-year Computer Science student building C++ projects.
