#include <iostream>
#include <math.h>
using namespace std;
double cnk(double m, double i){
if (i==0){
    return 1;}
return cnk(m,i-1)*((m-(i-1))/(i));
}

double fact(double n){
  double res = 1.0;
  for (int i = 1; i <= n; i++) {
	res = res * i;
	}
return res;
}

double ccnk(double m, double i){
return fact(m)/(fact(i)*fact(m-i));
}

int main()
{double m,x;
cout<<"Write m,x: ";
cin>>m>>x;
double bn = pow((1+x),m);
cout<<bn<<" just calc"<<endl;
double bnc=0;
for (int i=0;i<m+1;i++){
    bnc+=cnk(m,i)*pow(x,i);
}
cout<<bnc<<" recurent"<<endl;
double bncc = 0;
for (int i=0;i<m+1;i++){
    bncc+=ccnk(m,i)*pow(x,i);
}
cout<<bncc<<" fact";
    return 0;
}
