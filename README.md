# DateFast

DateFast is a lightweight command-line application written in **Python** for calculating weekdays, displaying monthly calendars, and improving weekday calculation skills through an interactive training mode.

---

## Features

* Calculate the weekday for any valid date.
* Display monthly calendars.
* Interactive terminal menu.
* Training mode with randomly generated dates.
* Custom training year range.
* Leap year support.
* Date validation.
* Colored terminal interface.
* Fast and lightweight.
* Built using Python standard libraries.

---

## Requirements

* Python 3.8 or newer

---

## Running DateFast

Run the application with:

### Linux / macOS

```bash
python3 DateFastV1.0.py
```

### Windows

```bash
python DateFastV1.0.py
```

---

## Main Menu

```text
===========================
        DateFast
===========================

1. Calculate Weekday
2. Print Calendar
3. Training Mode
0. Exit

===========================
```

---

## Training Mode

The training mode generates random dates within a year range chosen by the user.

For each question, enter the weekday using the following numbering:

```text
1 = Sunday
2 = Monday
3 = Tuesday
4 = Wednesday
5 = Thursday
6 = Friday
7 = Saturday
```

At the end of the session, DateFast displays:

* Number of correct answers.
* Number of wrong answers.
* Final score.

---

## Example

### Calculate Weekday

```text
Day   : 24
Month : 6
Year  : 2026

Weekday : Wednesday
```

### Print Monthly Calendar

```text
Year  : 2026
Month : 6

     June 2026
Mo Tu We Th Fr Sa Su
 1  2  3  4  5  6  7
 8  9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30
```

---

## Version History

### DateFast V1.0

* Complete rewrite in Python.
* Interactive terminal menu.
* Weekday training mode.
* Custom training year range.
* Monthly calendar printing.
* ANSI color support.
* Improved user experience.
* Cleaner and simpler code using Python standard libraries.

### DateFast V0.3

* Interactive menu.
* Monthly calendar printing.
* ANSI color support.

### DateFast V0.2

* Support for years from 2000 to 2099.
* Leap year support.
* Improved date validation.

### DateFast V0.1

* Initial release.
* Weekday calculation for the year 2026.

---

## License

This project is licensed under the MIT License.
