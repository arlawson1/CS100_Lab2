#include <stdio.h>
#include <string.h>
//This program was written by Andrew Lawson

int main(void){

  char str1[20];
  char str2[20];
  char str3[20];
  char str4[20];

  printf("Enter 4 single-word strings less than 20 characters long.\n");
  scanf("%s\n%s\n%s\n%s", str1, str2, str3, str4);

  if (strcmp(str1,str2) == 0){
    printf("Match\n");}
    else if (strcmp(str1,str3) == 0){
      printf("Match\n");}
      else if (strcmp(str1, str4) == 0){
        printf("Match\n");}
        else if (strcmp(str2, str3) == 0){
          printf("Match\n");}
          else if (strcmp(str2, str4) == 0){
            printf("Match\n");}
            else if (strcmp(str3, str4) == 0){
              printf("Match\n");}
              else{
                printf("No Match\n");}

  return 0;
}
