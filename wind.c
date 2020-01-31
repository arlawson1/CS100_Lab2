#include <stdio.h>
#include <math.h>

//This program was written by Andrew Lawson

int main(void){

  int temp, mph;
  double windChill;

  printf("Enter the temperature in Fahrenheit.\n");
  scanf("%d", &temp);

  printf("Now enter the wind speed in mph\n");
  scanf("%d", &mph);

  windChill = 35.74 + (0.6215 * temp) - (35.75 * pow(mph,0.16)) + (0.4275 * temp * pow(mph, 0.16));

  printf("The windchill is %lf.\n", windChill);

  return 0;
}
