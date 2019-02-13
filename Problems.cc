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



void Problem365_2(void) {
  // Create a random walk of length 12.
  class Random_Walk X(12);

  // Now, walk 10,000,000 times. Each time, check if X(6) = X(12)
  unsigned int Counter = 0;
  for(int i = 0; i < 10000000; i++)  {
    X.Walk();

    if(X(6) == X(12))
      Counter++;
  } // for(int i = 0; i < 10000000; i++)  {

  double P_Predicted = 5./16.;
  double P_Measured = ((double)Counter)/(10000000.);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Problem365_2(void) {



void Problem365_3(void) {
  // Create a random walk of length 12.
  class Random_Walk X(4);

  // Now, walk 10,000,000 times. Each time, check if X(6) = X(12)
  unsigned int Counter = 0;
  for(int i = 0; i < 10000000; i++)  {
    X.Walk();

    if(X(1)*X(2)*X(3) == 2)
      Counter++;
  } // for(int i = 0; i < 10000000; i++)  {

  double P_Predicted = 1./8.;
  double P_Measured = ((double)Counter)/(10000000.);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Problem365_3(void) {



void Problem365_4(void) {
  // First, let's create a random walk of length 3.
  class Random_Walk X(16);

  // Now, walk 10,000,000 times. Each time, check if X(3) is 2
  unsigned int Counter = 0;
  for(int i = 0; i < 10000000; i++) {
    X.Walk();

    if(X(7) + X(12) == X(1) + X(16))
      Counter++;
  } // for(int i = 0; i < 10000000; i++) {

  double P_Predicted = 252.*pow(.5,10);
  double P_Measured = ((double)Counter)/(10000000.);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void  Problem365_4(void) {



void Problem368(void) {
  // First, create a random walk of length 10
  class Random_Walk X(10);

  // Now, walk 1,000,000 times. Each time, check if any element is 5.
  unsigned Counter = 1000000;
  for(int i = 0; i < 1000000; i++) {
    X.Walk();

    for(int n = 0; n <= 10; n++) {
      if(X(n) == 5) {
        Counter--;
        break;
      } // if(X(n) == 5) {
    } // for(int n = 0; n <= 10; j++)
  } // for(int i = 0; i < 1000000; i++) {

    double P_Predicted = 1. - 2.*(45 + 10 + 1)/1024.;
    double P_Measured = ((double)Counter)/(1000000.);
    printf("The predicted probability is %6lf\n", P_Predicted);
    printf("The measured probability is  %6lf\n", P_Measured);
} // void Problem368(void) {




void Problem369(void) {
  // First, create a random walk of length 10
  class Random_Walk X(20);

  // Now, walk 1,000,000 times. Each time, check if any element is 5.
  unsigned Counter = 1000000;
  for(int i = 0; i < 1000000; i++) {
    X.Walk();

    for(int n = 1; n <= 20; n++) {
      if(X(n) == 0) {
        Counter--;
        break;
      } // if(X(n) == 5) {
    } // for(int n = 1; n <= 10; j++)
  } // for(int i = 0; i < 1000000; i++) {

  double P_Predicted = 0.176197052;
  double P_Measured = ((double)Counter)/(1000000.);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Problem369(void) {



void Problem3610(void) {
  // First, create a random walk of length 10.
  class Random_Walk X(10);

  // Now, walk 1,000,000 times. Each time, check if the max is > 3.
  unsigned Counter = 0;
  for(int i = 0; i < 1000000; i++) {
    X.Walk();

    /* Note. The walk can't get to 3 until the 3rd step, so we can begin searching
    there to improve runtime */
    for(int n = 3; n <= 10; n++) {
      if(X(n) == 3) {
        Counter++;
        break;
      } // if(X(n) == 3) {
    } // for(int n = 3; n <= 10; n++) {
  } // for(int i = 0; i < 1000000; i++) {

  double P_Predicted = 1. - (252. + 210. + 210.)/1024.;
  double P_Measured = ((double)Counter)/(1000000.);
  printf("The predicted probability is %6lf\n", P_Predicted);
  printf("The measured probability is  %6lf\n", P_Measured);
} // void Problem3610(void) {
