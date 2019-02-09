#include "Random_Walk.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator
  srand(time(0));

  // Make the Random walk object
  class Random_Walk X(10);

  // Go on a randm walk!
  X.Walk();

  // Cycle through the elements of the walk, print them out
  for(int i = 0; i <= 10; i++)  {
    int Xn;
    X.Get_Xn(i, Xn);
    printf("%3d ", Xn);
  } // for(int i = 0; i <= 10; i++)  {
  printf("\n");

  return 0;
} // int main() {
