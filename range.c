#include <stdio.h>

//This program was written by Andrew Lawson

int main(void)
{

  int a, b, c;
  int max, min;
  int range;

  printf("Enter 3 integers\n");
  scanf("%d %d %d", &a, &b, &c);

  if ((a > b) && (a > c)){        //This statement finds out if a is the max or min
    max = a;}
    else if ((a < b) && (a < c)){
      min = a;
    }

  if ((b > a) && (b > c)){        //This one finds out if b is the max or min
    max = b;}
    else if ((b < a) && (b < c)){
      min = b;
    }

  if ((c > a) && (c > b)){        //This one does the same for c
    max = c;}
    else if ((c < a) && (c < b)){
      min = c;
    }

  range = max - min;

  printf("The range of the three numbers is %d", range);

  return 0;
}
