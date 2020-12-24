#include <stdio.h> // pound is the preprocessor macro 

int mynumber[3]; // this creates an array with 3 integers, and those integers are defined in function below
// shorthand for this would be: int mynumber[3] = { 10, 20, 30 }; you can define arrays and assign numbers outside of the function, but if you want to add
// them or something more complicated, that would have to happen inside the function

void printMonth();  // this tells main that there will be a function called printMonth with no arguments, the function parameters are defined below

int main() { // there is no good reason for this to be an int, but it is. It returns one or some other meaningless number after it orders everything
  mynumber[0] = 10;
  mynumber[1] = 20;
  mynumber[2] = 30;

  printf( "%d %d %d \n", mynumber[0], mynumber[1], mynumber[2]);
  
  printMonth();

  return 0;
}

int month[4][7] = { // creates nested arrays, 4 weeks, with 7 days
  {0,1,2,3,4,5,6},
  {10,11,12,13,14,15,16},
  {17,18,19,20, 21,22,23},
  {24,25,26,27,28,29,30}
};

void printMonth() { // () means the function has no arguments
  for ( int i = 0; i < 4; i++) {
    int * week = month[i]; // * week defines a pointer to the ith month arrays, so this will make a list of the numbers in each week
    printf("first day of week = %d\n", week[0] ); // this will print the first item in each of the 4 arrays
    printf("every day = %d %d %d %d %d %d %d\n", week[0],week[1],week[2],week[3], week[4], week[5], week[6] ); // prints every day of each week
    for (int j = 0; j < 7; j++) { // this does the same thing as 32, but it's a nested for loop shortcut
      int day = week[j]; // no pointer here because there are no nested arrays in day
      printf("every day %d short way =  %d\n", j, day );
    } 
  }
}

