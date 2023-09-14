#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_YEAR 365

bool is_leap_year(int year) {
  return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int main() {
  int year, month, day;

  printf("Enter the year, month, and day: ");
  scanf("%d%d%d", &year, &month, &day);

  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (is_leap_year(year)) {
    days_in_month[1] = 29;
  }

  int day_of_year = day;
  for (int i = 0; i < month - 1; i++) {
    day_of_year += days_in_month[i];
  }

  printf("Day of the year: %d\n", day_of_year);

  return 0;
}

