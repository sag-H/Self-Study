//Demonstraing switch-case 
#include <stdio.h>

int main()
{

int day;
printf("Enter number of day:\n");
scanf("%i",&day);

//Long Syntax:
switch (day)
 {
  case 1:
    printf("Sunday");
    break;
  case 2:
    printf("Monday");
    break;
  case 3:
    printf("Tueday");
    break;
  case 4:
    printf("Wednesday");
    break;
  case 5:
    printf("Thursday");
    break;
  case 6:
    printf("Friday");
    break;
  case 7:
    printf("Saturday");
    break;
 }

 //Short Syntax:
 char letter;
 printf("\nEnter Letter:");
 scanf(" %c",letter);
 switch(letter)
  {
    case 'a': printf("First letter"); break;
    case 'b': printf("Second letter");break;
    case 'c': printf("Third letter"); break;
    case 'd': printf("Forth letter"); break;
    default: printf("Invalid letter.");
  }
 return 0;
}