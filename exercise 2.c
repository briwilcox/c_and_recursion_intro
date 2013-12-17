/**

Exercise 2, count to 100 from X (x being a number less than 100) iteratively and recursively printing each number as you go

See recursion : https://en.wikipedia.org/wiki/Recursion and https://en.wikipedia.org/wiki/Recursion_%28computer_science%29

**/
#include <stdio.h>


int main()
{
    iterative_count(0); //Should print "Iterative Count : (number)" on a new line each time
    printf("\n");
    recursive_count(0); //Should print "Recursive Count : (number)" on a new line each time
    return 0;
}
