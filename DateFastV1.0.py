from datetime import date
import calendar
import random
import os

# الالون 
RED     = "\033[91m"
GREEN   = "\033[92m"
YELLOW  = "\033[93m"
BLUE    = "\033[94m"
MAGENTA = "\033[95m"
CYAN    = "\033[96m"
WHITE   = "\033[97m"
BOLD    = "\033[1m"
RESET   = "\033[0m"

days = [
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
]


def clear():
    os.system("cls" if os.name == "nt" else "clear")


def pause():
    input("\nPress Enter to continue...")
    clear()


def calculate_weekday():
    clear()

    try:
        day = int(input("Day   : "))
        month = int(input("Month : "))
        year = int(input("Year  : "))

        d = date(year, month, day)

        print(f"\n{GREEN}Weekday : {days[d.weekday()]}{RESET}")

    except ValueError:
        print(f"\n{RED}Invalid date!{RESET}")

    pause()


def print_calendar():
    clear()

    year = int(input("Year  : "))
    month = int(input("Month : "))

    print()
    print(calendar.month(year, month))

    pause()


def random_date():
    clear()

    year = random.randint(2000, 2099)
    month = random.randint(1, 12)

    max_day = calendar.monthrange(year, month)[1]
    day = random.randint(1, max_day)

    print(f"{GREEN}Random Date{RESET}")
    print(f"{year}/{month}/{day}")

    pause()


def training():
    clear()

    start = int(input("Start Year : "))
    end = int(input("End Year   : "))

    score = 0
    total = 30 # تحديد عدد الاسئلة

    for question in range(1, total + 1):

        clear()

        year = random.randint(start, end)
        month = random.randint(1, 12)
        day = random.randint(1, calendar.monthrange(year, month)[1])

        d = date(year, month, day)

        correct = ((d.weekday() + 1) % 7) + 1

        print(f"{MAGENTA}{'='*35}{RESET}")
        print(f"{BOLD}Question {question}/{total}{RESET}")
        print(f"{CYAN}Date : {day:02}/{month:02}/{year}{RESET}")
        print(f"{MAGENTA}{'='*35}{RESET}")

        print("1 - Sunday")
        print("2 - Monday")
        print("3 - Tuesday")
        print("4 - Wednesday")
        print("5 - Thursday")
        print("6 - Friday")
        print("7 - Saturday")

        answer = int(input("\nAnswer : "))

        if answer == correct:
            print(f"\n{GREEN}Correct!{RESET}")
            score += 1
        else:
            print(f"\n{RED}Wrong!{RESET}")
            print(f"Correct : {correct} ({days[d.weekday()]})")

        input("\nPress Enter...")

    clear()

    print(f"\n{MAGENTA}{'='*40}{RESET}")
    print(f"{GREEN}{BOLD}      TRAINING FINISHED{RESET}")
    print(f"{MAGENTA}{'='*40}{RESET}")

    print(f"{GREEN}✔ Correct : {score}{RESET}")
    print(f"{RED}✘ Wrong   : {total-score}{RESET}")
    print(f"{YELLOW}★ Score   : {score*10}%{RESET}")

    pause()


def menu():

    while True:

        clear()

        print(f"""{MAGENTA}{BOLD}
===========================
        DateFast
===========================
{RESET}""")

        print(f"{CYAN}1. Calculate Weekday{RESET}")
        print(f"{CYAN}2. Print Calendar{RESET}")
        print(f"{CYAN}3. Training Mode{RESET}")
        print(f"{RED}0. Exit{RESET}")

        print(f"{MAGENTA}{'=' * 27}{RESET}")

        choice = input(f"{YELLOW}Choice: {RESET}")

        if choice == "1":
            calculate_weekday()

        elif choice == "2":
            print_calendar()

        elif choice == "3":
            training()

        elif choice == "0":
            clear()
            print(f"{GREEN}{BOLD}Goodbye!{RESET}")
            break

        else:
            print(f"\n{RED}Invalid choice! Please try again.{RESET}")
            input(f"\n{WHITE}Press Enter to continue...{RESET}")

menu()