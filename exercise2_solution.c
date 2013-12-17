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

// Solution

void iterative_count(int x) //Makes a copy of X in memory
{
    while(x <= 100)
    {
        printf("Iterative count : %d \n", x);
        x++; //X++ is equivalent to x + 1
    }
}

void recursive_count(int y) //Makes a copy of X in memory each recursion (not good)
{
    if(y <= 100)
    {
        printf("Recursive count : %d \n", y);
        recursive_count( y + 1 );
    }
}
