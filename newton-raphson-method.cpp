#include<iostream>
#include<math.h>
using namespace std;

double c, d;

double func(double x)
{
    return x*x + 3*x + 1;
}
double de_func(double x)
{
    return 2*x + 3;
}

void newton_raphson(double c)
{

    //if(func(a)*func(b) >= 0){
     //   cout<<"wrong input"<<endl;
    //    return;
   // }
    //c = ( a + b)/2;
    //d = c - ( func(c) / de_func(c));

    do{
        d = c - ( func(c) / de_func(c));

        if(func(d) == 0){
            cout<<"Root: "<<d<<endl;
            exit(0);
        }
        else {
            cout<<"Root: "<<d<<endl;
            c = d;
        }
    } while(abs(func(d))>0.001);
}

int main()
{
    newton_raphson(2);
    return 0;
}
