#include<stdio.h>
#include<conio.h>
void main() {
  int day;
  printf ("Enter the day of the week (1 to 7) ");
  scanf ("%d", &day);
  switch(day) {
    case 1 : printf ("Today is SUNDAY");break;
    case 2 : printf ("Today is MONDAY");break;
    case 3 : printf("Today is TUESDAY");break;
    case 4 : printf("Today is WEDNESDAY");break;
    case 5 : printf("Today is THURSDAY");break;
    case 6 : printf ("Today is FRIDAY");break;
    case 7 : printf("Today is SATURDAY");break;
    default : printf("Enter a valid choice(l to 7 only)");
}
getch();
}
