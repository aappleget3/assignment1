/**
* Author: AJ Applget
* Date: September 5, 2018
*
* This program computes an angle of refracrtion given the
* angle of incidenrts and index of refracrion of the medium
*
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main( int argc, char** argv){


double angleOfIncidence;
double indexOfRefraction;
double angleOfRefraction;



  printf("enter the angle of incidnece");
  scanf("%lf", &angleOfIncidence);

  printf("enter the index of refracrtion");
  scanf("%lf", &indexOfRefraction );

  angleOfRefraction = asin((1*sin(angleOfIncidence))/indexOfRefraction);

  printf("Angle of Inidence: %lf\n", angleOfIncidence);
  printf("Index of Refraction: %lf\n", indexOfRefraction);
  printf("Angle of Refractron: %lf\n", angleOfRefraction);

  return 0;

}
