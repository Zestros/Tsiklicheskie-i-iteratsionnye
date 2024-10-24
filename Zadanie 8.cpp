#include <iostream>
#include <math.h>
using namespace std;

int main()
{double el;
cout<<"Write e:";
cin>>el;
double x=1.0, col=0.0;
int n=0;
while (M_E-col>el){
    col=pow((1+1/x),n);
    x++;
    n++;
}
cout<<"Iter="<<n;
    return 0;
}
