#include <stdio.h>
#include <stdlib.h>
#include <omp.h>




//This program rolls dice. Number of dice defined on command line.


// PROTOTYPESSSSSSSSSSSSSSSSS

//Function for creating dice_array. Creates an array; each index is a dice face. a D20 has 20 indicies.


//Function for rolling. Generate a random number between [0] and [sizeof(dice_array)-1]



int main(int argc, char* argv[]) {
	
// check command line
  if (argc != 3) {
    fprintf(stderr, "usage: %s dice_floor  dice_roof  num_rolls\n", argv[0]); //#######################
    exit(-1);
  }
 
// check dice_floor 
  int dice_floor = atoi(argv[1]);
  if (dice_floor < 0) {    //Need better checks. Check if !NULL
    fprintf(stderr, "error: dice_floor must be >= 0\n");
    exit(-1);
  }
  
 // check dice_roof
  int dice_roof = atoi(argv[2]);
  if (dice_roof < dice_floor) { //Need better checks. Check if !NULL
    fprintf(stderr, "error: dice_roof must be at least = dice_floor\n");
    exit(-1);
  }
  
  
  // check num_rolls
  int num_rolls = atoi(argv[3]);
  if (num_rolls < 0) {    //Need better checks. Check if !NULL
	  fprintf(stderr, "error: num_rolls must be >= 0");
	  exit(-1);
  }