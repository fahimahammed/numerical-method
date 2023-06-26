#include<iostream>
#include<math.h>

using namespace std;

void trapezoidal_method(int n)
{
    double x[10], y[10], res;

    for(int i; i<n; i++){
        cin>>x[i]>>y[i];
    }

    double h = (x[n-1] - x[0])/n;

    for(int i=0; i<n; i++){
        if(i==0 || i== (n-1)){
            res += y[i];
        }else{
            res += 2*y[i];
        }
    }
    cout<<"Result: "<<res<<" "<<h<<endl;
    res = (h/2)*res;
    cout<<"Result: "<<res<<endl;
}

int main()
{
    trapezoidal_method(5);
    return 0;
}
