# DateFast

DateFast is a lightweight command-line application written in C++ for calculating the weekday corresponding to a given date and displaying monthly calendars directly from the terminal.

## Available Versions

### DateFastV0.1

* Calculates the weekday for dates in the year 2026 only.

### DateFastV0.2

* Calculates the weekday for dates between 2000 and 2099.
* Added support for leap years.
* Improved date validation.

### DateFastV0.3

* Interactive menu-based interface.
* Calculate the weekday for any valid date between 2000 and 2099.
* Display a monthly calendar for any month between 2000 and 2099.
* Colored terminal interface using ANSI escape codes.
* Improved code organization and user experience.

## Features

* Calculate the weekday for a given date.
* Print monthly calendars.
* Leap year support.
* Date validation.
* Support for years from 2000 to 2099.
* Lightweight and fast.
* Terminal-based user interface.
* Written entirely in C++.

## Requirements

* C++ compiler (GCC, Clang, MSVC, etc.)
* C++11 or newer

## Compilation

### DateFastV0.1

```bash
g++ DateFastV0.1.cpp -o DateFastV0.1
```

### DateFastV0.2

```bash
g++ DateFastV0.2.cpp -o DateFastV0.2
```

### DateFastV0.3

```bash
g++ DateFastV0.3.cpp -o DateFastV0.3
```

## Usage

### Run DateFastV0.3

```bash
./DateFastV0.3
```

Main menu:

```text
========= DateFast =========
1 - Calculate weekday
2 - Print monthly calendar
99 - Exit
============================
```

## Example: Calculate Weekday

```text
Enter Day   : 24
Enter Month : 6
Enter Year  : 2026

Date : 2026/6/24
Corresponding day : Wednesday
```

## Example: Print Monthly Calendar

```text
Enter Year  : 2026
Enter Month : 6

Su Mo Tu We Th Fr Sa
    1  2  3  4  5  6
 7  8  9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30
```

## Changelog

### V0.3

* Added an interactive menu system.
* Added monthly calendar printing.
* Added ANSI color support.
* Improved input validation.
* Refactored code into smaller functions.
* Improved overall user experience.

### V0.2

* Added support for years from 2000 to 2099.
* Added leap year handling.
* Improved date calculation capabilities.

### V0.1

* Initial release.
* Supported dates in the year 2026 only.

## License

This project is licensed under the MIT License.
