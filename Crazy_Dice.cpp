/*This program rolls dice. Number of dice defined on command line.

		By Michael E. Campos
		Last modified on 18 May 2017 at 0853

*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <random>

// PROTOTYPES
// Function for rolling. Generate a random number between [0] and [sizeof(dice_array)-1]

//////////////
//START MAIN//
//////////////
int main(int argc, char* argv[]) {
	
// check command line
  if (argc != 2) {
    fprintf(stderr, "usage: %s num_faces num_rolls\n", argv[0]); //#######################
    exit(-1);
  }
  
// check num_faces
  const int num_faces = atoi(argv[1]);
  if(num_faces < 1) { //Needs better checks. Check if !NULL
	fprintf(stderr, "error: num_faces must be >= 1\n");
	exit(-1);
  }
  
 // check num_rolls
  const int num_rolls = atoi(argv[2]);
  if (num_rolls < 1) {    //Needs better checks. Check if !NULL
	  fprintf(stderr, "error: num_rolls must be >= 1\n");
	  exit(-1);
  }
  
  
  // Create the die
  int die[num_faces];
  
  // Create die faces
  for(int i = 0; i < num_faces; i++){
	  die[i] = i + 1;
  }
  
  
  // Create an array to store rolls. Size is num_rolls
  int rolls[num_rolls];
  
  
  // Create a .txt file named "rolls.txt"
  
  // Create random devices
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<int> dist(1, num_faces);
  
  // For loop. num_rolls iterations. For loop creates 
  for(int i = 0; i < num_rolls; i++){
	  
	  rolls[i] = dist(mt);
	  
  }
  
  // Write the content of rolls[] to "rolls.txt"
  
  
}
////////////
//END MAIN//
////////////
