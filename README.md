# DateFast

DateFast is a lightweight command-line application written in C++ that calculates the weekday corresponding to a given date.

## Available Versions

### DateFastV0.1
- Calculates the weekday for dates in the year 2026 only.

### DateFastV0.2
- Calculates the weekday for dates between 2000 and 2099.
- Improved functionality compared to V0.1.

## Features

* Calculate weekdays for dates
* Support for years 2000–2099 (V0.2)
* Fast and lightweight
* Easy terminal-based interface
* Written in pure C++

## Requirements

* C++ compiler (GCC, Clang, MSVC, etc.)
* C++11 or newer

## Compilation

### Version 0.1

```bash
g++ DateFastV0.1.cpp -o DateFastV0.1
```

### Version 0.2

```bash
g++ DateFastV0.2.cpp -o DateFastV0.2
```

## Usage

### Run Version 0.1

```bash
./DateFastV0.1
```

### Run Version 0.2

```bash
./DateFastV0.2
```

Follow the instructions displayed in the terminal and enter the requested date information.

To exit the program, press:

```text
Ctrl + C
```

## Example (V0.2)

```text
Enter day: 24
Enter month: 6
Enter year: 2026

Result: Wednesday
```

## Changelog

### V0.2
- Added support for years from 2000 to 2099.
- Expanded date calculation capabilities.
- Improved overall usability.

## License

This project is licensed under the MIT License.
