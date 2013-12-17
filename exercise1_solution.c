/**

/Exercise 1, implement adding, subtracting, multiplying
and dividing whole numbers (integers) and real numbers (use double)

**/

#include <stdio.h>

//Function Prototypes
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int div(int x, int y);
double add_precise(double x, double y);
double sub_precise(double x, double y);
double mult_precise(double x, double y);
double div_precise(double x, double y);


int main()
{
    //You can store the returned value in a variable
    double ap = add_precise(1.5,1.5);
    double sp = sub_precise(20.5, 0.234);
    double mp = mult_precise(10.5, 50.2);
    double dp = div_precise(19, 2);

    printf("Adding 1 + 1 = %d\n", add(1,1)); // or use the returned value directly
    printf("Adding 1.5 + 1.5 = %f\n", ap);
    printf("Subtracting 10 - 5 = %d\n", sub(10,5));
    printf("Subtracting 20.5 - 0.234 = %f\n", sp);
    printf("Multiplying 20 * 10 = %d\n", mult(20,10));
    printf("Multiplying 10.5 and 50.2 = %f\n", mp);
    printf("Dividing 5 by 0 (did you check for this?) = %d\n", div(5,0));
    printf("Dividing 19 by 2 = %f\n", dp);
    return 0;
}

//Solution


int add(int x, int y)
{
    return (x + y);
}

double add_precise(double x, double y)
{
    return (x + y);
}

int sub(int x, int y)
{
    return (x - y);
}

double sub_precise(double x, double y)
{
    return (x - y);
}

int mult(int x, int y)
{
    return (x * y);
}

double mult_precise(double x, double y)
{
    return (x * y);
}

int div(int x, int y)
{
    if(y==0){return y;} else {return (x / y);}
}

double div_precise(double x, double y)
{
    if(y==0){return y;} else {return (x / y);}
}
