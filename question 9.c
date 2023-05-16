
#include <stdio.h>
 int main()
 { int days, years, weeks, remaining_days; 
printf("Input Days? "); 
scanf("%d", &days);
 years = days / 365; weeks = (days % 365) / 7; 
remaining_days = days % 7;
 printf("Years \tWeeks \t Days\n"); 
printf("%d \t %d \t %d\n", years, weeks, remaining_days);
 return 0; }