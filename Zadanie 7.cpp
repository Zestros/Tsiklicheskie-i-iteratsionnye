#include <iostream>
#include <math.h>
using namespace std;

int main()
{double el;
cout<<"Write e:";
cin>>el;
double x=1.0, col=0.0;
int k=0;
while (1-col>el){
    col=sin(x)/x;
    x=x/2;
    k++;
}
cout<<"x="<<x<<" "<<"Iter="<<k;
    return 0;
}
