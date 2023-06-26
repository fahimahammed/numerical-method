#include<iostream>
using namespace std;
double err = 0.01;
double c;
double func(double x)
{
    return x*x*x - 3*x - 5;
}

void false_position(double a, double b)
{
    if(func(a) * func(b) >= 0){
        cout<<"Wrong input!"<<endl;
        return;
    }
    while((b-a) >= err){
        c = (a*func(b)- b*func(a)) / (func(b) - func(a));

        if(func(c) == 0){
            cout<<"result: "<<c<<endl;
            break;
        }
        else if(func(a) * func(c) < 0){
            cout<<"result: "<<c<<endl;
            b = c;
        }
        else{
            cout<<"result: "<<c<<endl;
            a = c;
        }
    }
}

int main()
{
    cout<<"hello";
    false_position(1, 3);
    return 0;
}
