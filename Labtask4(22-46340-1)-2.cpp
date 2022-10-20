#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[10]= {5,6,7,9,1,3,2,8,4,0};
    int n,flag=0;
    cout<<"which numbers position you want to know? : ";
    cin>>n;

    for(int i=0; i<10; i++)
        if(x[i]==n)
        {
            flag++;
            cout<<n<<" found in "<<i+1<<" position";
        }
    if(flag==0) cout<<"Not found!";


    return 0;
}
