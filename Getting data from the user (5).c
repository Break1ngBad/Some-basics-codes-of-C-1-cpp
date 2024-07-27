#include <stdio.h>

int main()
{
    int day, month, year, addday = 0;
    
    printf("Enter day: ");
    scanf("%d", &day);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
       
    int leapYear = 0;

    // Check if the year is a leap year
    if (year % 400 == 0)
        leapYear = 1;
    else if (year % 100 == 0)
        leapYear = 0;
    else if (year % 4 == 0)
        leapYear = 1;

    // Accumulate the total days in the previous months
    if (month > 1) addday += 31; // January
    if (month > 2) addday += (leapYear ? 29 : 28); // February
    if (month > 3) addday += 31; // March
    if (month > 4) addday += 30; // April
    if (month > 5) addday += 31; // May
    if (month > 6) addday += 30; // June
    if (month > 7) addday += 31; // July
    if (month > 8) addday += 31; // August
    if (month > 9) addday += 30; // September
    if (month > 10) addday += 31; // October
    if (month > 11) addday += 30; // November

    // Add the days of the current month
    addday += day;
   
    // Print the result
    printf("Day of the year: %d\n", addday);
    printf("%d is %s leap year.\n", year, (leapYear ? "a" : "not a"));

    return 0;
}