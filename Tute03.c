/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  //declaring variables
  int n,sum = 0,i;

//getting user input
  printf("enter a number : ");
  scanf("%d",&n);

//getting sum
  for(i = 1;i <= n;i++)
  {
    sum = sum + i;
  }
  //output
    printf("sum %d",sum);
  return 0;
}

