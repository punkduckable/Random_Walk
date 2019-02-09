#if !defined(RANDOM_WALK_SOURCE)
#define RANDOM_WALK_SOURCE

#include "Random_Walk.h"
#include <stdlib.h>
#include <stdio.h>


// Constructor
Random_Walk::Random_Walk(const unsigned Length_In) {
  Length = Length_In;
  X = new int[Length+1];
  X[0] = 0;
} // Random_Walk::Random_Walk(const unsigned Length_In) {



// Destructor
Random_Walk::~Random_Walk(void) {
  delete X;
} // Random_Walk::~Random_Walk(void) {



// This method actually performs the random walk
void Random_Walk::Walk(void) {
  /* Each random number is between 0 and RAND_MAX (inclusive).
  We want to map half of these numbers to -1 and the others to 1. if
  x <= RAND_MAX/2 (integer division) then go to -1, otherwise go to 1. */
  const int HALF_RAND_MAX = RAND_MAX/2;

  for(int n = 1; n <= Length; n++) {
    int x = rand();

    if(x <= HALF_RAND_MAX)
      X[n] = X[n-1] - 1;
    else
      X[n] = X[n-1] + 1;
  } // for(int n = 1; n <= Length; n++) {
} // void Random_Walk::Walk(void) {



// Getter methods
void Random_Walk::Get_Xn(const unsigned i, int & Xn) const {
  if(i > Length)
    printf("BAD! Index out of bounds\n");
  else
    Xn = X[i];
} // void Random_Walk::Get_Xn(const unsigned i, int & Xn) const {



void Random_Walk::Get_Length(unsigned & Len_Out) const {
  Len_Out = Length;
} // void Random_Walk::Get_Length(unsigned & Len_Out) const {

#endif
