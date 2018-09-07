/**
* Auhtor: AJ Appleget
* Date: september 5, 2018
*
* This program computes
*
*
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char** argv){


double initialValue;
double finalValue;
double annualizedReturnRate;
double year;

  printf("enter the initial value of th investment");
  scanf("%lf", &initialValue);

  printf("enter the final value of investment");
  scanf("%lf", &finalValue);

  printf("enter the number of years between initial and finl values");
  scanf("%lf", &year);

  annualizedReturnRate = (pow((finalValue/initialValue),(1/year)) -1) * 100;

  printf("The Anual Rate of Return is: %lf percent\n", annualizedReturnRate);


return 0;
}
