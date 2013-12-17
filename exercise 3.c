/**

Exercise 3 is more advanced recursion and taking psuedocode or mathematical expressions and turning it into c

Examples sourced from Wikipedia, but all c code written by me.

It should be noted recursive solutions often are not the most efficient solutions, but they arguably are
quite elegant.

Each solution should have one or more base cases (where recursion does not take place), and one or more recursive cases.

For these problems your solutions should be under 10 lines or you are probably over thinking the problem, or trying to
solve it using iteration.

"The power of recursion evidently lies in the possibility of defining an infinite set of objects by a finite statement.
In the same manner, an infinite number of computations can be described by a finite recursive program, even if this
program contains no explicit repetitions." -  Wirth, Niklaus (1976). Algorithms + Data Structures = Programs. Prentice-Hall. p. 126.

**/

#include <stdio.h>

int factorial(int n);
int gcd(int x, int y);
int fibonacci(int n);

int main()
{
    int n0 = factorial(0);
    int n1 = factorial(1);
    int n5 = factorial(5);
    int n10 = factorial(10);

    printf("\nFactorials:\n0! = %d\n1! = %d\n5! = %d\n10! = %d\n", n0, n1, n5, n10);

    printf("\nGreatest common divisor of 20 and 4 is %d", gcd(20,4)); //Should be 4
    printf("\nGreatest common divisor of 259 and 111 is %d", gcd(259,111)); //Should be 37
    printf("\nThe 5th fibonacci number is %d", fibonacci(5)); //Should be 5
    printf("\nThe 10th fibonacci number is %d", fibonacci(10)); //Should be 55

    return 0;
}

/**

For the factorial function :

In mathematics, the factorial of a non-negative integer n, denoted by n!,
is the product of all positive integers less than or equal to n. For example,

5! = 5 X 4 X 3 X 2 X 1 = 120.
n 	n!
0 	1
1 	1
2 	2
3 	6
4 	24
5 	120
6 	720
7 	5040
8 	40320
9 	362880
10 	3628800

The psuedo code to calculate this is as follows:

function factorial is:
input: integer n such that n >= 0
output: [n × (n-1) × (n-2) × … × 1]

    1. if n is 0, return 1
    2. otherwise, return [ n × factorial(n-1) ]

end factorial

**/

/**

Greatest common divisor :

In mathematics, the greatest common divisor (gcd), also known as the greatest common factor (gcf),
or highest common factor (hcf), of two or more integers (at least one of which is not zero), is
the largest positive integer that divides the numbers without a remainder.

For example, the GCD of 8 and 12 is 4.

Psuedo Code :

function gcd is:
input: integer x, integer y such that x >= y and y >= 0

    1. if y is 0, return x
    2. otherwise, return [ gcd( y, (remainder of x/y) ) ]

end gcd

**/

/**
Fibonacci numbers

Fibonacci numbers can be defined as

F(n) = F(n-1) + F(n-2)
Where
F(0) = 0
F(1) = 1

(From Wikipedia)
F(n) from 0 - 20 is :
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765

Fibonacci numbers are found in nature, and engineering surprising frequently.

Applications of Fibonacci Numbers
( https://en.wikipedia.org/wiki/Fibonacci_numbers#Applications )
"The Fibonacci numbers are important in the computational run-time analysis of Euclid's
algorithm to determine the greatest common divisor of two integers: the worst case input
for this algorithm is a pair of consecutive Fibonacci numbers.[46]

The Fibonacci numbers are also an example of a complete sequence. This means that
every positive integer can be written as a sum of Fibonacci numbers, where any one
number is used once at most.

Moreover, every positive integer can be written in a unique way as the sum of one
or more distinct Fibonacci numbers in such a way that the sum does not include any
two consecutive Fibonacci numbers. This is known as Zeckendorf's theorem, and a sum
of Fibonacci numbers that satisfies these conditions is called a Zeckendorf representation.
The Zeckendorf representation of a number can be used to derive its Fibonacci coding.

Fibonacci numbers are used by some pseudorandom number generators.

Fibonacci numbers are used in a polyphase version of the merge sort algorithm in which
an unsorted list is divided into two lists whose lengths correspond to sequential Fibonacci
numbers – by dividing the list so that the two parts have lengths in the approximate proportion φ.
A tape-drive implementation of the polyphase merge sort was described in The Art of Computer Programming.

Fibonacci numbers arise in the analysis of the Fibonacci heap data structure.

The Fibonacci cube is an undirected graph with a Fibonacci number of nodes that has been proposed
as a network topology for parallel computing.

A one-dimensional optimization method, called the Fibonacci search technique, uses Fibonacci numbers.[47]

The Fibonacci number series is used for optional lossy compression in the IFF 8SVX audio file
format used on Amiga computers. The number series compands the original audio wave similar to
logarithmic methods such as µ-law.[48][49]

Since the conversion factor 1.609344 for miles to kilometers is close to the golden ratio (denoted φ),
the decomposition of distance in miles into a sum of Fibonacci numbers becomes nearly the kilometer
sum when the Fibonacci numbers are replaced by their successors. This method amounts to a radix 2
number register in golden ratio base φ being shifted. To convert from kilometers to miles, shift
the register down the Fibonacci sequence instead."

**/
