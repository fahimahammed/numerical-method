#include<iostream>
#include<math.h>

using namespace std;

double c;
double func(double x)
{
    return x*x*x - x - 1;
}

void secant_method(double a, double b)
{
    if(a>b && func(a)*func(b)>=0){
        cout<<"wrong input"<<endl;
        return;
    }
    do{
        c = (a*func(b) - b*func(a))/(func(b)-func(a));
        if(func(c) == 0){
            cout<<"root: "<<c<<endl;
            break;
        }
        else{
            cout<<"root: "<<c<<endl;
            a = b;
            b = c;
        }
        cout<<"**** "<< abs(func(c))<<"  "<<func(c)<<endl;
    }while(abs(func(c))>0.001);
}

int main()
{
    secant_method(1, 2);
    return 0;
}
