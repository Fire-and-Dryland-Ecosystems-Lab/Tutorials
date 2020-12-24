#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myarray[5] = { 2,4,6,8,10 };
int * myarray2; // this is a pointer to an array of ints. We will dynamically allocate memory to it inside main


int main( int argc, char ** argv ) {
  printf( "ARGC %d \n", argc ); // this is number of arguments on the command line argc = arg count, argv is argument value


  int count = atoi( argv[1] ); //atoi is a function in the stdlib that converts ascii to an integer (char to int) we do this  because argv has to be defined as a char, but we want it to have a numeric value so we can use it in a for loop. Char is one byte so usually ascii characters (0-255). We have to dynamically allocate memory to myarray 2 based on 'count' using malloc because in myarray 2 we didn't specify how much memory to allocate.
 
  
  myarray2 = malloc( count * sizeof( int ) );

  for ( int i = 0; i < count; i++ ){
    myarray2[ i ] = i * i;
  }
  for ( int i = 0; i < count; i++ ){
    printf( "%d\n", myarray2[ i ] );
  }

for( int i=1; i < argc; i++) {
    printf( "argc %d: argv %c\n", i, *argv[i] ); // i is number of arguments, argv[i] is the value of each argument
    //for( int i=0; i < 5; i++) {
    //printf( "array %d\n", myarray[i] ); 
}
  return 0;
}
