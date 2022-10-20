#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z[10]={5,6,7,9,1,3,2,8,4,0};
    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-i-1;j++)
        if(z[j]>z[j+1])
        swap(z[j],z[j+1]);
    }
    for(int i=0;i<10;i++){
        cout<<z[i]<<"   ";
    }
    return 0;
}
