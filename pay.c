#include <stdio.h>

//This program was written by Andrew Lawson

int main(void){

  int hours;
  double wage, overTime, doubleTime, weeklyPay;

  printf("Enter your hourly wage.\n");
  scanf("%lf", &wage);

  printf("Now enter the hours you worked.\n");
  scanf("%d", &hours);

  if (hours <= 40){
    weeklyPay = wage * hours;
  }

  if ((hours > 40) && (hours <=50)){
    overTime = hours - 40;               //This is for the hours after standard 40
    weeklyPay = (wage * 40) + (overTime * wage * 1.5);
  }

  if (hours > 50){
    doubleTime = hours - 50;             //This is for the doubleTime hours
    weeklyPay = (wage * 40) + (wage * 10 * 1.5) + (doubleTime * wage * 2);
  }

  printf("Your weekly pay is %lf", weeklyPay);

  return 0;
}
