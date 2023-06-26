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
    for(int i=0; i<n; i++){
        //cin>>x[i];
        cout<<" "<<x[i];
    }
    float res = 0;
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            res += fx[i];
        }
        else if(i%3 == 0){
            res += 2*fx[i];
        }
        else{
            res += 3*fx[i];
        }
    }
    res = res * ((3*h)/8.0);
    cout<<"Result: "<<res<<" "<<h<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    sinpshos_method(1.4, 2.2, 5);

    return 0;
}

