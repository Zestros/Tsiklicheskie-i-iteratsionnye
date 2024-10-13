#include <bits/stdc++.h>
using namespace std;

int main()
{double k,p,r;
cout<<"Write k, p, r: ";
cin>>k>>p>>r;
p=p/100.0;
int i = 0;
double s = r;
int flag = 0;
while (k*p<r){
       if (k*(1+p)<=s){
        cout<<"Yes";
        flag = 1;
        break;
       }
       else{
        s+=r;
        i++;
        k=k*(1+p);
       }
       }
if (flag==0){
    cout<<"No";
}
    return 0;
}
