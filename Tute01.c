/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declaring variables
  int sub1,sub2;
  float avg;

  //getting user input
  printf("Enter a subject 1 marks: ");
  scanf("%d",&sub1);
  printf("Enter a subject 2 marks: ");
  scanf("%d",&sub2);

//getting avg
  avg = (sub1+sub2) / 2;

//printing avg
  printf("average is : %.2f",avg);
  return 0;
}

