#include <bits/stdc++.h>

using namespace std;
double func(double x){
    double f = x*x*x*x; //Запись функции
    return f;
}
int main()
{double h = 0.00001;
int flag = 1;
string str;

for (long double i=-5;i<=5;i+=0.1) {
    if (h<fabs(func(i)-func(-i))){
        flag=0;}
}
if (flag==1){
    str = "Yes";
        }
else{
    str = "No";
}
cout<<str;
    return 0;
}
