#include <iostream>
using namespace std;
int main()
{
    cout<<"Size of first array: ";
    int n,x;
    cin>>n;
    cout<<"Size of second array: ";
    cin>>x;
    int a[n];
    int b[x];
    int c[n+x];
   cout<<"Elements of first array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
   }
    cout<<"Elements of second array: ";
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[n-(i+1)];

   }
    int k=x-1;
    for(int i=n;i<n+x;i++)
    {
        c[i]=b[k];
        k--;
    }
    for(int i=0;i<n+x;i++)
    {
        cout<<c[i]<<" ";
    }

return 0;

}
