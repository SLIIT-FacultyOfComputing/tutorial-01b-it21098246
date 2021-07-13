/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //declaring variables
  int distance;
  float Amount;

//getting user iput
  printf("Enter the distance : ");
  scanf("%d",&distance);

 //if the distance is less than 30
 if (distance <= 30 )
 {
    Amount = distance * 50.0;

 }
 //if the distance if more than 30
 else if (distance < 30)
 {
   Amount = 30 * 50.0 + (distance - 30) * 40.0;

 }
 //printing output
 printf("total amount to be paid: %.2f",Amount);
  return 0;
}
