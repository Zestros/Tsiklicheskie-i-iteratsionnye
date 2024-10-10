#include <bits/stdc++.h>
using namespace std;

long double e = M_E;


double fact(double n){
    double res = 1;
for (int j = 1; j <= n; j++) {
	res = res * j;}
	return res;
}

double ddr(int n,int key){
 long double res;
 if (key==n){
    return 0;
 }
 int k;
 if (pow(-1,n)==0){
    k=2;
 }
 else{
    k=n;
 }
 return res = 1/(k+pow(-1,n)*ddr(n+1,key));
}


int main()
{int i=2;
int css=0;
long double z = 2;
int i1=2;
long double zz;


while (abs(e-z)>1e-5){ //Проверка сходимости первого алгоритма
    z+=1/fact(i);
    i+=1;
    css +=1;
    if (css==8){
        break;
    }
}
while (abs(e-zz)>1e-5){ //Проверка сходимости второго алгоритма
    zz=ddr(1,i1)+1;
    i1+=1;
    if (i1==15){
        break;
    }

}
cout<<css<<" "<<i1<<" "<<z<<" "<<zz<<" "<<e;
    return 0;
}
