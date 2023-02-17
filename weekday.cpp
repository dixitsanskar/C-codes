#include <iostream>
using namespace std;

int main() {
  int day, month, year;
  cout << "Enter a date in the format of DD/MM/YYYY: ";
  scanf("%d/%d/%d", &day, &month, &year);

  int days = day - 1;
  for (int i = 1; i < month; i++) {
    if (i == 2) {
      if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        days += 29;
      } else {
        days += 28;
      }
    } else if (i == 4 || i == 6 || i == 9 || i == 11) {
      days += 30;
    } else {
      days += 31;
    }
  }
  for (int i = 1; i < year; i++) {
    if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
      days += 366;
    } else {
      days += 365;
    }
  }
  int weekday = (days + 1) % 7;
  string weekdayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  cout << "The given date " << day << "/" << month << "/" << year << " is a " << weekdayNames[weekday] << endl;

  return 0;
}
