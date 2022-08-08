/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark01, mark02, avg;

  printf("Enter marks for the subject one: ");
  scanf("%d", &mark01);

  printf("Enter marks for the subject two: ");
  scanf("%d", &mark02);
  
  avg = (mark01 + mark02) / 2;

  printf("Avrage mark is: %d", avg);
  
  return 0;
}