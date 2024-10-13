#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{int a,b;
cout<<"Write a b: ";
cin>>a>>b;
    int h = b*2+1, w = a*2+1;
    char table[h][w];

    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            table[i][j] = '.';
        }
    }


    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            int y = i - b, x = j - a;
            if (x*x * b*b + y*y * a*a <= a*a * b*b) {
                table[i][j] = '@';
            }
        }
    }


    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            cout<<table[i][j];
        }
        cout<<endl;
    }

    return 0;
}
