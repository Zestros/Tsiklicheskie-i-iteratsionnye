#include <bits/stdc++.h>
using namespace std;

double ss(double x){
return sin(x)*sin(x); // Запись функции
}
int main()
{double t = 2* M_PI;

for (double i=0;i<5*M_PI;i+=0.001){
    if (ss(i)==ss(i+t)){
        cout<<ss(i)<<" "<<ss(i+t)<<" | ";
    }
}
    return 0;
}
