#include<stdio.h>
#include<conio.h>

double func(double x)
{
    return x*x*x - x*x + 2;
}

double error_accept = 0.01;
double c;

void bisection(double a, double b)
{
    if( func(a)* func(b) >=0 ){
        printf("Please enter valid input of a and b.");
        return;
    }

    c = a;
    while ( (b-a) >= error_accept) {
        c = (a+b)/2;
        if( func(c) == 0 ){
            printf("Root = %lf\n", c);
            break;
        }
        else if( func(c)*func(a) < 0){
            printf("Root = %lf\n", c);
            b = c;
        }
        else{
            printf("Root = %lf\n", c);
            a = c;
        }
    }
}

int main()
{
    double a=-10, b=20;
    bisection(a, b);
    printf("\nThe Root is: %lf\n", c);
    return 0;
}
