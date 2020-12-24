#include <stdio.h>
/* # tells C that we want to use code thats not part of C, 
   include tells the C compiler to include all the text that's in the <function> and include it in the beginning of what it compiles
   <stdio.h> is a header file that contains a function that allows to print something
   in rhessys #include is in the include directiory, which contains the header files. 
   The directory is pointed to by the makefile, so the compiler looks there for the .h files that are specified in the #include command. */

int main(){
    // function goes here - inside {} = block, Main = name of function - C always looks for a function called main as the first thing it executes, 
   //() = stores argument
    printf("here is some text\n"); // printf = print formatted - so you can include data inside string (e.g. %f), "" = specify string, \n = new line
    printf("here is some text%f %f %i \n", 2.456, 4.567, 3); // %f = tells it to print a float, %i or %d = int, 
                                                             // then you put a comma outside the string and specify the float
    int myvariable = 0;
         /* defines variable, inside function means that other functions won't be able to access it, 
            but then you could reuse the name in another function - so its good if you want to reuse variable names for different things. 
            Also minimizes how function affects stuff outside function. Sometimes should compartmentalize for simplicity. 
            In .h file variables are freestanding, so any function can use that variable if the executable file says #include <whateveritis.h> */
    printf("here is a variable %i \n", myvariable);
    myvariable = 1;
    printf("here is a variable %i \n", myvariable);
    char mycharacter = 'c';

    /* char assigns 1 byte of memory, can hold a max value of 255, 256 possible numbers because 0 counts
       1 byte = 8 bits
         10 = 2
         11 = 3
         01 = 1
         00 = 0   these are the 2-bit numbers in binary

         128 64 32 16 8 4 2 1 = 255 + 0, means 256 possible numbers using combos below for e.g.
         -   -  -  -  - - - -
         1   0  0  1  0 0 0 0 = 144
         
        its called a char because of ascii - e.g. c is represented with the no. 99 if want to print character rather than no., put %c 
        by itself char is just an 8 bit number, if want it translated have to put %c in print statement, so char can be a number 0-255 or a single character 
        by default, char values are 'signed' which means they can be positive or negative. 
        if they are signed, the negative sign goes in the left-most bit (spot = 128) in that case the range of numbers are -127 to 127
        if unsigned the range of numbers is 0 to 255 */

    printf("here is a lowercase c %c\n", mycharacter);
    printf("here it is again %c\n", 99);

    mycharacter = 12;
    int a = 0;
    a++; // increment operator : now a = 1
    a--; // decrement operator : now a = 0
    a = a + 5; // now a = 5
    a += 5; // now a = 10, this is shorthand for the above
    a -= 5; // now a = 5, same as a = a - 5
    a *=5; // a = 25

    printf("the value of a is %i\n", a);
 
    for(int i = 0; i < 10; i++ ) {
        printf("i = %i\n", i);
    }  
    /* for loop starts with initilizer = int i = 0, then the condition = i < 10 = when i is less than 10, and ends with the afterthought = i++.
       the afterthought is applied after each print (each time the loop runs, therefore, the 1st run = 0 and the final run = 10
       printf command is saying to print the string i = an int. for each value of i */

    for(unsigned char c = 0; (int)c < 255; c++ ) { // if you put (int)c in the condition place, it casts c as an int (though not really necessary here) 
        printf("c = %c\t", c); // \t prints them as a new tab
    }
   // this will print the ascii characters

    return 0; // return statement ends the function, if executable returns something other than 0 then there's an error. 0 means ran properly
}

// in terminal, :gcc test1.c will compile this, creates an executable = a.out. To run ./a.out
