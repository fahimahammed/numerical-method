#include<iostream>
#include<math.h>

using namespace std;

void sinpshos_method(float lb, float ub, int n)
{
    float h = (ub-lb)/n;

    float x[10], fx[10];

    for(int i=0; i<n; i++){
        //x[i] = lb + i*h;
        //fx[i] = func(x[i]);
        //cout<<endl<<"x = ";
        cin>>x[i];
        //cout<<"f(x) = ";
        cin>>fx[i];
        //cout<<endl;

    }
    float res = 0;
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            res += fx[i];
        }
        else if(i%2 != 0){
            res += 4*fx[i];
        }
        else{
            res +=2*fx[i];
        }
    }
    res = res * (h/3);
    cout<<"Result: "<<res<<endl;
}

int main()
{
    sinpshos_method(1.4, 2.2, 5);
    return 0;
}
