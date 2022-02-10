#include<iostream>
using namespace std;

double c;

double func(double p)
{
    return p*p*p - p*p + 2;
}

void bisection_method(double a, double b, double error_accept)
{
    if( func(a) * func(b) >= 0){
        printf("Please enter valid number of a and b.");
        return;
    }

    c = a;
    while((b-a) >= error_accept){
        c = (a+b)/2;

        if(func(c) == 0){
            printf("c = %lf\t f(c) = %lf\n", c, func(c));
            break;
        }
        else if(func(c)*func(a) < 0){
            printf("c = %lf\t f(c) = %lf\n", c, func(c));
            b = c;
        }
        else {
            printf("c = %lf\t f(c) = %lf\n", c, func(c));
            a = c;
        }
    }
    printf("\nThe root is: %lf\n", c);
}

int main()
{
    double a, b, err;
    printf("Enter first guess: ");
    scanf("%lf", &a);

    printf("Enter second  guess: ");
    scanf("%lf", &b);

    printf("Enter tolerable error: ");
    scanf("%lf", &err);

    bisection_method(a, b, err);
    return 0;
}
