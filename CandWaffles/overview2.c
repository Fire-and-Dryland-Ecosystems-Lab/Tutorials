// call header files

#include <stdio.h>
#include <stdlib.h>

// main function

int main(){
    
    printf("here is some text\n");
    printf("here is some text%f %f %i \n", 2.456, 4.567, 3);  

// Define a variable
                                                             
    int myvariable = 0;
    
    printf("here is a variable %i \n", myvariable);
    myvariable = 1;
    printf("here is a variable %i \n", myvariable);
    
// define a character

    char mycharacter = 'c';

    printf("here is a lowercase c %c\n", mycharacter);
    printf("here it is again %c\n", 99);

// for loop

    for(int i = 0; i < 10; i++ ) {
        printf("i = %i\n", i);
    }  

    for(unsigned char c = 0; (int)c < 255; c++ ) { 
        printf("c = %c\t", c); 
    }

// Modulo

// % = modulo generator. e.g. % 255 will return the remainder when int is divided by 255
        printf("a random number between 0-255 is %i\n", rand() % 255); // this will generate a random numbers between 0 and 255
    
    for(int e = 0; e < 99; e++ ) {
        printf("random number =  %i\n", rand() % 255);
    }  
// Return statement

    return 0; 
}

