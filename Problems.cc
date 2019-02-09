#include "Problems.h"
#include <stdio.h>
#include <math.h>

void Correctness_Test1(void) {
  // First, let's create a random walk of length 3.
  class Random_Walk X(3);

  // Now, walk 10,000,000 times. Each time, check if X(3) is 2
  unsigned int Counter = 0;
  for(int i = 0; i < 10000000; i++) {
    X.Walk();

    if(X(3) == 2)
      Counter++;
  } // for(int i = 0; i < 10000000; i++) {

  double P_Predicted = 0;
  double P_Measured = ((double)Counter)/(10000000);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Correctness_Test1(void) {




void Correctness_Test2(void) {
  // First, let's create a random walk of length 3.
  class Random_Walk X(10);

  // Now, walk 10,000,000 times. Each time, check if X(3) is 2
  unsigned int Counter = 0;
  for(int i = 0; i < 10000000; i++) {
    X.Walk();

    if(X(10) == 0)
      Counter++;
  } // for(int i = 0; i < 10000000; i++) {

  double P_Predicted = 252.*pow(.5,10);
  double P_Measured = ((double)Counter)/(10000000);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Correctness_Test2(void) {
