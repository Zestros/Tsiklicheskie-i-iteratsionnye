#include <bits/stdc++.h>
using namespace std;

double func(double x){
    double f = tan(x); //Ввод функции
    return f;
}

int main()
{double h = 1e-5; //Заданная погрешность
int flag = 1;
int fl =0;

for (long double i=-5.0;i<0.0;i+=0.1) { //Проверка четности
    
    if (h<fabs(func(i)-func(-i))){
        flag=0;}
}

if (flag==1){
    fl==1;
}
else{
    flag=2;
}

for (long double i=-5;i<0;i+=0.1) { //Проверка нечетности
    if (h<fabs(func(i)+func(-i))){
        flag=0;}
}
string str;

if (fl==1){
    str = "Chet";
        }
else if (flag==2){
    str = "No chet";
}
else{
    str = "General";
}
cout<<str;

    return 0;
}