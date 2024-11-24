#include <stdio.h>
#include <string.h> // For strcmp

int main() {
  // declare array
  const char *monthDate[12][2] = {
    {"1", "31"},
    {"2", "28"},// 29
    {"3", "31"},
    {"4", "30"},
    {"5", "31"},
    {"6", "30"},
    {"7", "31"},
    {"8", "31"},
    {"9", "30"},
    {"10", "31"},
    {"11", "30"},
    {"12", "31"}
  };
  // declare variable and input
  int date, month, year;
  printf("Enter your date: ");
  scanf("%d", &date);
  printf("Enter your month: ");
  scanf("%d", &month);
  printf("Enter your year: ");
  scanf("%d", &year);

  // considtion
  if(date < 0 || month < 0 || year < 1000) {
    printf("invalid !!");
    return 1;
  }
  if(month == 2 && year % 4 == 0 && year % 100 !=0 || year % 400 == 0) {
    date--;
  }
  //change month and date to string
  char monthStr[3];
  sprintf(monthStr, "%d", month);
  char dateStr[3];
  sprintf(dateStr, "%d", date);

  //considtion
  if (strcmp(monthDate[month - 1][0], monthStr) == 0) {
    if(strcmp(monthDate[month - 1][1], dateStr) >= 0){
      printf("Hop le");
      return 1;
    }
  }

  //end
  printf("invalid !!");
  return 0;
}

