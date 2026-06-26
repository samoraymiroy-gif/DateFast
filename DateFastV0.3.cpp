#include <iostream>
#include <iomanip>

using namespace std;

const string RED    = "\033[31m";
const string GREEN  = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE   = "\033[34m";
const string RESET  = "\033[0m";


int point_x[12] =
{
    -4, 0, 0, -3, -5, -1,
    -3, -6, -2, -4, 0, -2
};

string showday[7] =
{
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};


bool isLeapYear(int year)
{
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}


int MaxDay(int month, int year)
{
    if(month == 2)
        return isLeapYear(year) ? 29 : 28;

    if((month <= 7 && month % 2 != 0) ||
       (month >= 8 && month % 2 == 0))
        return 31;

    return 30;
}


bool checkDate(int day, int month, int year)
{
    if(year < 2000 || year > 2099)
        return false;

    if(month < 1 || month > 12)
        return false;

    if(day < 1 || day > MaxDay(month, year))
        return false;

    return true;
}


int calculateDay(int day, int month, int year)
{
    int x_day = ((year % 100) / 4) +
                (year % 100) + 3;

    int leapCorrection = 0;

    if(isLeapYear(year) &&
      (month == 1 || month == 2))
    {
        leapCorrection = 1;
    }

    int result =
    (
        day -
        point_x[month - 1] +
        x_day -
        leapCorrection
    ) % 7;

    if(result <= 0)
        result += 7;

    return result;
}


void calculateWeekday()
{
    int day;
    int month;
    int year;

    cout << BLUE << "Enter Day   : " << RESET;
    cin >> day;

    cout << BLUE << "Enter Month : " << RESET;
    cin >> month;

    cout << BLUE << "Enter Year  : " << RESET;
    cin >> year;

    if(!checkDate(day, month, year))
    {
        cout << RED
             << "\nInvalid date!\n"
             << RESET;
        return;
    }

    int weekday =
    calculateDay(day, month, year);

    cout << GREEN;
    cout << "\nDate : "
         << year << "/"
         << month << "/"
         << day;

    cout << "\nCorresponding day : "
         << showday[weekday - 1]
         << endl;

    cout << RESET;
}

void PrintMonth()
{
    int year;
    int month;

    cout << BLUE;
    cout << "Enter Year  : ";
    cin >> year;

    cout << "Enter Month : ";
    cin >> month;
    cout << RESET;

    if(year < 2000 || year > 2099)
    {
        cout << RED
             << "\nUnsupported year!\n"
             << RESET;
        return;
    }

    if(month < 1 || month > 12)
    {
        cout << RED
             << "\nInvalid month!\n"
             << RESET;
        return;
    }

    int maxDay =
    MaxDay(month, year);

    int firstDay =
    calculateDay(1, month, year);

    cout << GREEN;
    cout << "\nSu Mo Tu We Th Fr Sa\n";

    for(int i = 1; i < firstDay; i++)
    {
        cout << "   ";
    }

    int column = firstDay;

    for(int day = 1;
        day <= maxDay;
        day++)
    {
        cout << setw(2)
             << day << " ";

        if(column == 7)
        {
            cout << endl;
            column = 1;
        }
        else
        {
            column++;
        }
    }

    cout << "\n";
    cout << RESET;
}

void menu()
{
    int choice;

    while(true)
    {
        cout << YELLOW;
        cout << "\n========= DateFast =========\n";
        cout << "1 - Calculate weekday\n";
        cout << "2 - Print monthly calendar\n";
        cout << "99 - Exit\n";
        cout << "============================\n";
        cout << RESET;

        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                calculateWeekday();
                break;

            case 2:
                PrintMonth();
                break;

            case 99:
                cout << GREEN
                     << "\nGoodbye!\n"
                     << RESET;
                return;

            default:
                cout << RED
                     << "\nInvalid option!\n"
                     << RESET;
        }
    }
}

int main()
{
    menu();
    return 0;
}
