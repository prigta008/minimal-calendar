#include <stdio.h>
#include <math.h>
void main()
{
    int day, month, year, K, M, C, D;
    char days[7][15] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Welcome to Minimal Calendar !"
           "\n It will tell the day of the entered date in DD/MM/YYYY"
           "\n Enter Date : ");
    scanf("%d/%d/%d", &day, &month, &year);
    K = day;
    if (month > 2)
    {
        M = month - 2;
        D = year % 100;
    }
    else
    {
        M = month + 10;
        D = (year % 100) - 1;
    }
    C = year / 100;
    int No_of_odd_days = K + (int)floor(2.6 * (double)M - 0.2) + D + (int)floor(D / 4) + (int)floor(C / 4) - 2 * C;
    while (No_of_odd_days < 0)
        No_of_odd_days += 7;
    No_of_odd_days = No_of_odd_days % 7;
    printf("Day : %s on %d/%d/%d", days[No_of_odd_days], day, month, year);
}