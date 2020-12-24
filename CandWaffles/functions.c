#include <stdio.h> // pound is the preprocessor macro 

int mynumber = 2; // variable outside of main can be accessed by all functions (not just main)

int add2numbers (int num1, int num2){ // function declaration, this line includes return type, function name, argument list
    return num1 + num2; // this line adds two numbers and returns the results, this return value could also go after main, or in a separate file 
                        //(main just needs to know the function name and argument list, for example rhessys.h would list the function declarations, 
                        // and the return (function code) can be specified later or in a separate file (would need to repeat 
                        // function delcaration in separate file so it knows what function you are referring to) This is why rhessys has make for compiling
                        // because it is compiling multiple files
}

int main () { // main just specifies the order code is executed in
    printf( "MY NUMBER = %d\n", add2numbers( 3,5 ) ); // printf always writes to the terminal, whereas fprintf has the option of printing to other file types

    return 1; //
}
