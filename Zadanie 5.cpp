#include <bits/stdc++.h>
using namespace std;


int main()
{double k;

double cot = 1.609344;
cout<<"write limit k:";
cin>>k;
cout<<"mile"<<"    "<<"km"<<endl;
int mile =0;
int km = 1;
while (mile<k){
    if (mile*cot>km){
        cout<<double(mile)<<"    "<<double(mile)*cot<<endl;
        km+=1;
    }
    else if ((mile+1)*cot>(km+1)){

        cout<<double(km)/cot<<"    "<<double(km)<<endl;
        km+=1;
    }


    else {

        cout<<double(km)/cot<<"    "<<double(km)<<endl;
        mile+=1;
    }
}
    return 0;
}
