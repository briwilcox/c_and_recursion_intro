//This is a comment indicated by 2 '/'s in a row
//Comments are not read by the compiler

//Import a Library
#include <stdio.h> //.h files are header files

/**
This is also
a multi-line
comment
**/

//int indicates this function "returns" an integer
//Functions have parameter lists in between function_name( 'parameters' ), main has no parameters here
int main() //Int main is common to c & c++ programs, it is the main body of your program.
{ //Open bracket indicates the start of a function

  //Printf was imported from stdio
  printf("Hello world\n");

  //Returning 0 indicates the program exited successfully
  return 0;
} //Close bracket indicates the end of a function
