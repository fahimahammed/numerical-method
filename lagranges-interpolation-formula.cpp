#include<bits/stdc++.h>
using namespace std;
struct Data {
   float x, y;
};
double interpolate(Data function[], int xi, int n) {
   double result = 0;
   for (int i = 0; i < n; i++) {
      double term = function[i].y;
      for (int j = 0; j < n; j++) {
         if (j != i) {
            term = term * (xi - function[j].x) / double(function[i].x - function[j].x);
         }
      }
      result += term;
   }
   return result;
}
int main() {
   Data function[] = {{300,2.4771}, {304,2.4829}, {305,2.4843}, {307,2.4871}};
   cout << interpolate(function, 301, 4) << endl;
   return 0;
}
